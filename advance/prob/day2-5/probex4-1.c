#include <stdio.h>
#define SIZE 500

int main() {
  // サイズSIZEの配列を用意する。
  int nums[SIZE];
  int i, j;
  int *p = NULL;
  for(j = 0; j < SIZE; j++) {
    nums[j] = j + 1;
  }
  
  p = &nums[SIZE - 1]; // pにnumsのアドレスを入力
  for(i = 0; i < SIZE; i++) {
    printf("%d ", *p);
    p--; // pのアドレスをデクリメント
  }
  printf("\n");
  return 0;
}
