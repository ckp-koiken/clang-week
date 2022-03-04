#include <stdio.h>
#include <stdlib.h>


int main() {
  FILE *file;  // ファイルポインタ（出力用）
  file = fopen("./test/sample.txt", "w");  // ファイルを書き込み用に開く
  if(file == NULL) {
    printf("ファイルが開けません。\n");
    exit(1);
  }
  //  ファイルにデータを書き込む
  fprintf(file, "Hello World.\n");  // ファイルに書く
  fprintf(file, "ABCDEF\n");
  fclose(file);
  printf("hello\n");
  return 0;
}
