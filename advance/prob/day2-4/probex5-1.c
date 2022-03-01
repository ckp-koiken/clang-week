#include <stdio.h>
#include <string.h>

int main() {
  char s1[255], s2[255], s3[255];;
  printf("文字列1:");
  scanf("%s", s3);
  strcpy(s1, s3);
  printf("%s\n", s1);
  
  printf("文字列2:");
  scanf("%s", s2); 
  printf("%s\n", s2);

  strcat(s1, s2);
  printf("結合した結果：%s\n", s1);

  return 0;
}
