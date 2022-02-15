#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showNumber(int*);
void show2Number(int*);

int main() {
  int i, n;
  int a[5];
  srand((unsigned)time(NULL));
  for(i = 0; i <= 4; i++) {
    a[i] = rand() % 100 + 1;
  }
  printf("発生した乱数：\n");
  showNumber(a); 
  printf("\n");
  printf("二倍した値：\n");
  show2Number(a);
  printf("\n");
  return 0;
}

void showNumber(int* num) {
  int i;
  for(i = 0; i <= 4; i++) {
    printf("%d ", *(num + i));
  }
}

void show2Number(int* num) {
  int i;
  for(i = 0; i <= 4; i++) {
    *(num + i) *= 2; 
    printf("%d ", *(num + i));
  }
}
