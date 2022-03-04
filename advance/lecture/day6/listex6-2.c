#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main() {
  FILE *file;
  char line[SIZE];  // 読み込む行
  line[0] = '\0';  // 初期化（空文字列）
  file = fopen("./test/sample.txt", "r");
  if(file == NULL) {
    printf("ファイルが開けません。\n");
    exit(1);
  }
  // ファイルのデータを読み込み
  while(fgets(line, SIZE, file) != NULL) {
    printf("%s", line);
  }
  fclose(file);
  return 0;
}
