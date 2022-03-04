#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file;
  int i, size;
  // 書き込むデータ
  char *rdata;
  // バイナリデータの書き込み
  file = fopen("./test/test.bin", "rb");
  if(file == NULL) {
    printf("ファイルオープンに失敗しました。\n");
    exit(1);
  }
  // ファイルの最後までシーク
  fseek(file, 0, SEEK_END);  // SEEK_END: ファイルの終端
  // ファイルの大きさを取得
  size = ftell(file);
  // メモリのサイズだけ、配列を動的に生成
  rdata = (char*)malloc(sizeof(char) * size);
  // ファイルの最後までポインタを戻す
  fseek(file, 0 , SEEK_SET);  // SEEK_SET: ファイルの先頭
  fread(rdata, sizeof(char), size, file);
  fclose(file);

  // 結果を表示
  for(i = 0; i < size; i++) {
    printf("%x ", rdata[i]);
  }
  printf("\n");
  // メモリ開放
  free(rdata);

  return 0;
}
