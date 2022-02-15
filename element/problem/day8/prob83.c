#include <stdio.h>

int main() {
  int n, i, j;
  printf("任意の数字を入力：\n");
  scanf("%d", &n);
  printf("%dの階乗を計算：\n", n);
  j = 1;
  for(i = 1; i <= n; i++) {
    j *= i;
    printf("%d\n", j);
  }
  printf("%dの階上：%d\n", n, j);


  return 0;
}
