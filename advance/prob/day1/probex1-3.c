#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i, small, mid, large;
  int a[5];
  small = 0;
  mid = 0;
  large = 0;
  srand((unsigned)time(NULL));
  for(i = 1; i <= 5; i++) {
    a[i] = rand() % 100 + 1;
    printf("a[%d] = %d ", i, a[i]);
    if(a[i] >= 20 && a[i] <= 50) {
      mid += 1;
    } else if(a[i] > 80) {
      large += 1; 
    } else if(a[i] >= 0 && a[i] < 10) {
      small += 1;
    }
    
  };
  printf("\n");
  printf("20以上50以下の数：%d個\n", mid);
  printf("80より大きい数：%d個\n", large);
  printf("0以上10未満の数：%d個\n", small);


  return 0;
}
