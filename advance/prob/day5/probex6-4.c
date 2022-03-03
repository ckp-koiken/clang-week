#include <stdio.h>

#define STUDENT_NUM 5.0

typedef struct {
  int id;  // 学生番号
  int kokugo;  // 国語の点数
  int sansu;  // 算数の点数
  int rika;  // 理科の点数
  int shakai;  // 社会の点数
  int eigo;  // 英語の点数
  
} student_data;

void setData(student_data*, int, int, int, int, int, int);
void showData(student_data*);
void printAvg(student_data*);

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
  // データの表示
  for(i = 0; i < 5; i++) {
    showData(&data[i]);
  }
  // 平均点の計算
  printAvg(data);
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

void showData(student_data *data) {
  printf("学生番号：%d 国語：%d 算数：%d 理科：%d 社会：%d 英語：%d\n", data -> id, data -> kokugo, data -> sansu, data -> rika, data -> shakai, data -> eigo);
}

void printAvg(student_data *data) {
  int i;
  float kokugo = 0.0;
  float sansu = 0.0;
  float rika = 0.0;
  float shakai = 0.0;
  float eigo = 0.0;
  for(i = 0; i < 5; i++) {
    kokugo += data -> kokugo;
    sansu += data -> sansu;
    rika += data -> rika;
    shakai += data -> shakai;
    eigo += data -> eigo;
    data++;
  };
  printf("国語 平均 = %.2f\n", kokugo/STUDENT_NUM);
  printf("算数 平均 = %.2f\n", sansu/STUDENT_NUM);
  printf("理科 平均 = %.2f\n", rika/STUDENT_NUM);
  printf("社会 平均 = %.2f\n", shakai/STUDENT_NUM);
  printf("英語 平均 = %.2f\n", eigo/STUDENT_NUM);
}

