#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n1, n2, i;
  srand((unsigned)time(NULL));
  for(i = 1; i <= 6; i++) {
    n1 = rand() % 10 + 1;
    n2 = rand() % 10 + 1;
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
  }
  return 0;
}
