#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
  srand((unsigned)time(NULL));
  for(int i = 1; i <= 4; i++) {
    int n, absn;
    n = rand() % 21 - 10;
    absn = abs(n);
    printf("%dつめの数値：%d 絶対値：%d\n", i, n, absn);
  }
  return 0;
}

