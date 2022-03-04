#include <stdio.h>

#define MONTH 6

typedef struct {
  int month;  // 月
  int jukyo;  // 住居費
  int food;  // 食費
  int hifuku;  // 被服費
  int kyouyou;  // 教養費
  int medical;  // 医療費
  int other;  // その他
  int total;  // 費用合計
} kaikei;

void setData(kaikei*, int, int, int, int, int, int, int);
int goukei(kaikei*);

int main() {
  int i, medCom, foodCom, max_index;
  kaikei data[MONTH];
  int month[] = {1, 2, 3, 4, 5, 6};
  int jukyo[] = {86000, 86000, 86000, 86000, 86000, 86000};
  int food[] = {47000, 43000, 38600, 39500, 38600, 37500};
  int hifuku[] = {3000, 30000, 5000, 0, 28000, 3000};  
  int kyouyou[] = {20000, 15000, 65000, 12000, 7000, 5000}; 
  int medical[] = {9500, 0, 500, 0, 5200, 0};
  int other[] = {66000, 43000, 76000, 75000, 63500, 67000};  
  
  // データの設定
  for(i = 0; i < 6; i++) {
    setData(&data[i], month[i], jukyo[i], food[i], hifuku[i], kyouyou[i], medical[i], other[i]);
  }


  // 構造体の中身を表示
  for(i = 0; i < 6; i++) {
    printf("%d %d %d %d %d %d %d \n",
           (data+i)->month, 
           (data+i)->jukyo, 
           (data+i)->food, 
           (data+i)->hifuku, 
           (data+i)->kyouyou, 
           (data+i)->medical, 
           (data+i)->other
           );
  }

  printf("\n");

  // 費目ごとの合計額を計算
  for(i = 0; i < 6; i++) {
    goukei(data + i);
    printf("%d %d %d %d %d %d %d %d \n",
           (data+i)->month, 
           (data+i)->jukyo, 
           (data+i)->food, 
           (data+i)->hifuku, 
           (data+i)->kyouyou, 
           (data+i)->medical, 
           (data+i)->other,
           (data+i)->total
           );
  }

  // 結果の表示
  printf("\n");
  printf("各月の出費の合計\n");
  printf("---------------------\n");
  for(i = 0; i < 6; i++) {
    printf("%d %d \n", (data+i) -> month, (data+i) -> total);
  }

  // 医療費最大月の表示
  medCom = 0;
  for(i = 0; i < MONTH; i++) {
    if((data+i)->medical > medCom) {
      medCom = (data+i)->medical;
    }
  }
  max_index = 0;
  for(i = 0; i < MONTH; i++) {
    if(data[i].medical > data[max_index].medical) {
      max_index = i;
    }
  }
  printf("医療費の最も多い月：%d月、金額：%d円\n", data[max_index].month, medCom);


  // 食費最大月の表示
  foodCom = 0;
  for(i = 0; i < MONTH; i++) {
    if((data+i)->food > foodCom) {
      foodCom = (data+i)->food;
    }
  }
  max_index = 0;
  for(i = 0; i < MONTH; i++) {
    if(data[i].food > data[max_index].food) {
      max_index = i;
    }
  }
  printf("食費の最も多い月：%d月、金額：%d円\n", data[max_index].month, foodCom);

  
  return 0;
}

void setData(kaikei *data, int month, int jukyo, int food, int hifuku, int kyouyou, int medical, int other) {
  data -> month = month;
  data -> jukyo = jukyo;
  data -> food = food;
  data -> hifuku = hifuku;
  data -> kyouyou = kyouyou;
  data -> medical = medical;
  data -> other = other;
}


int goukei(kaikei* data) {
  int sum;
  sum = data->jukyo + data->food + data->hifuku + data->kyouyou + data->medical + data->other;
  data->total = sum;
}

