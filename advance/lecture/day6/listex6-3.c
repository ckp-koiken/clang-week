#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file;
  int c;
  file = fopen("./test/sample.txt", "r");
  if(file == NULL) {
    printf("ファイルが開けません。\n");
    exit(1);
  }

  // ファイルのデータを読み込む
  while((c = fgetc(file)) != EOF) {
    printf("%c", (char)c);
  }
  fclose(file);
  return 0;
}
