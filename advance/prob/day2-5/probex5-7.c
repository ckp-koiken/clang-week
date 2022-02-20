#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char numString[] = "100"; // 数値の文字列
  int num; // numStringの数値を入れる変数
  num = atoi(numString);
  printf("%d\n", num);
  return 0;
}