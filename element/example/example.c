#include <stdio.h>

// list-storage6-3

void showStatic();

int main() {
  showStatic();
  showStatic();
}

void showStatic() {
  static int s = 100;  //静的変数の宣言と初期化
  printf("s = %d\n", s);
  s++; //静的変数のインクリメント
}
