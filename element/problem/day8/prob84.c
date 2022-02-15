#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int r;
  srand((unsigned)time(NULL));
  r = rand() % 1000 + 1;
  printf("%d\n", r);
  if(r < 9) {
    printf("1桁です\n");
  } else if(r >= 10 && r < 100) {
    printf("2桁です\n");
  } else if(r >= 100 && r < 1000) {
    printf("3桁です\n");
  } else {
    printf("4桁です\n");
  }
  return 0;
}
