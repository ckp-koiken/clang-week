#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* キーボードから入力した文字列を反転させるプログラム */

int main() {
  char text[16];
  char *p = NULL;
  int i, j;
  printf("文字列を入力（最大16文字）：");
  scanf("%s", text);
  // キーボードから入力された文字列を、その長さ+1の配列変数をmalloc()で生成させて代入する
  p = (char*)malloc(strlen(text) + 1);
  j = strlen(text); // strlen()：文字列の長さを得られる
  // 生成させた配列に、入力させた文字列を反転させたデータを入れる
  for(i = 0; text[i] != '\0'; i++) {
    p[j - i - 1] = text[i];
  }

  // 結果を出力する
  printf("%s\n", p);

  // 生成したメモリをfree()で開放する。
  free(p);


  return 0;
}
