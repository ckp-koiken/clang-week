#include <stdio.h>
#include <string.h>

/* 共用体の定義 */
union data {
  int n;  // 整数のデータ
  double d; // 実数のデータ
  char s[16]; // 文字列のデータ
};

int main() {
  union data d[3];
  d[0].n = 1;
  d[1].d = 3.14;
  strcpy(d[2].s, "Hello");
  printf("%d %f %s\n", d[0].n, d[1].d, d[2].s);
}
