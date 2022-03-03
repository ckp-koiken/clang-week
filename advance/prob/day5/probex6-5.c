#include <stdio.h>

#define STUDENT_NUM 5.0

typedef struct {
  int id;  // 学生番号
  int kokugo;  // 国語の点数
  int sansu;  // 算数の点数
  int rika;  // 理科の点数
  int shakai;  // 社会の点数
  int eigo;  // 英語の点数
  int total; // 各人の合計点
  
} student_data;

void setData(student_data*, int, int, int, int, int, int);
int sum(student_data*);

int main() {
  student_data data[5];
  int i;
  int id[] = {1001, 1002, 1003, 1004, 1005};
  int kokugo[] = {82, 92, 43, 72, 99};
  int sansu[] = {43, 83, 32, 73, 72};
  int rika[] = {53, 88, 53, 71, 82};
  int shakai[] = {84, 79, 45, 68, 91};
  int eigo[] = {45, 99, 66, 59, 94};
  
  // データの設定
  for(i = 0; i < 5; i++) {
    setData(&data[i], id[i], kokugo[i], sansu[i], rika[i], shakai[i], eigo[i]);
  }


  // 科目ごとの合計点を計算
  printf("番号 国語 数学 理科 社会 英語 合計\n");
  for(i = 0; i < 5; i++) {
    int total;
    total = sum(data + i);
    data[i].total = total;
    printf("%d  %d   %d   %d   %d   %d   %d\n",
           (data+i)->id,
           (data+i)->kokugo,
           (data+i)->sansu,
           (data+i)->rika,
           (data+i)->shakai,
           (data+i)->eigo,
           (data+i)->total
           );
  }
  return 0;
}

void setData(student_data *data, int id, int kokugo, int sansu, int rika, int shakai, int eigo) {
  data -> id = id;
  data -> kokugo = kokugo;
  data -> sansu = sansu;
  data -> rika = rika;
  data -> shakai = shakai;
  data -> eigo = eigo;
}


int sum(student_data* data) {
  int sum;
  sum = data->kokugo + data->sansu + data->rika + data->shakai + data->eigo;
  return sum;
}
