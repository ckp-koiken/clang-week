/*
　probex5-3と同じように動作するプログラムをstrlenを使わないで書く
*/

#include <stdio.h>

int main() {
  char moji[10];
  int len = 0;
  printf("文字列を入力：");
  scanf("%s", moji);
  while (moji[len] != '\0'){
    len++;
  }
  printf("文字列の長さ：%d文字\n", len);

  return 0;
}