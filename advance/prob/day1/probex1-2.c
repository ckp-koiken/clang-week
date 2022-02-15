#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i, max, min;
  max = 0;
  min = 10;
  srand((unsigned)time(NULL));
  for(i = 1; i <= 5; i++) {
    int n;
    n = rand() % 10 + 1;
    printf("%d ", n);
    if(n > max) {
      max = n;
    } else if(n < min) {
      min = n; 
    }
  };
  printf("\n");
  printf("最大値：%d\n", max);
  printf("最小値：%d\n", min);

  return 0;
}
