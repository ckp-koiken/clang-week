#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// probex3-1、上手くできないので保留…（2022/02/03）

int main() {
  char n[50];
  int j = 0;
  //unsigned char i = 0x20;
  scanf("%s", n);
  printf("Input words: %s\n", n);

  while(n[j] == 'O') {
    // n[j] = n[j] | 0x20;
    printf("%c\n", n[j]);
    j++;
  }
  
  // printf("%x\n", n | i);
  return 0;
}
