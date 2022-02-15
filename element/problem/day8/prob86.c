#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int bunshi, bunbo;
  srand((unsigned)time(NULL));
  bunshi = rand() % 11 + 1;
  bunbo = rand() % 9 + 2;
  printf("%d %d\n", bunshi, bunbo);
}

