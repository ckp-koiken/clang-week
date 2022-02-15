#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
  srand((unsigned)time(NULL));
  for(i = 1; i <= 5; i++) {
    int n;
    n = rand() % 10 + 1;
    printf("%d ", n);
  };
  printf("\n");
  return 0;
}
