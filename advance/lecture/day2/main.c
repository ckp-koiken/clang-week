#include <stdio.h>

// 変数の値入れ替えを行う関数
void swap(int*, int*);

int main() {
  int a = 1, b = 2;
  printf("a = %d b = %d\n", a, b);
  swap(&a, &b);
  printf("a = %d b = %d\n", a, b);
  return 0;
}

// 値の入れ替え
void swap(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

/*
int main() {
  // ポインタをNULLで初期化
  int *p = NULL;
  // アドレスを指定しないまま値を代入
  *p = 1;
  return 0;
}
*/
