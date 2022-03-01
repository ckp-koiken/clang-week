#include <stdio.h>
#include <string.h>

int main() {
  char moji[10];
  int len;
  printf("文字列を入力：");
  scanf("%s", moji);
  len = strlen(moji);
  printf("文字列の長さ：%d文字\n", len);

  return 0;
}