#include <stdio.h>

// 関数ポインタを引数としてとる関数
void funcp(int (*)(int), int n);
// 関数ポインタに用いる関数
int dbl(int);
int hlf(int);

int main() {
  funcp(dbl, 8); // 引数として関数を渡す
  funcp(hlf, 8); // 引数として関数を渡す
  return 0;
}

void funcp(int (*f)(int), int n) {
  printf("引数：%d 結果：%d\n", n, f(n));
}

// 2倍を返す関数
int dbl(int n) {
  return n * 2;
}

// 2倍を返す関数
int hlf(int n) {
  return n / 2;
}
