#include <stdio.h>
#include "calc2.h"
#include "showResult.h"

int main() {
  int a = 2, b = 3;
  printf("%d + %d = ", a, b);
  add(a, b);
  showAnswer();
  printf("%d - %d = ", a, b);
  sub(a, b);
  showAnswer();
}




