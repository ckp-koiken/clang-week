#include <stdio.h>

int main() {
  char s1[10], s2[10], s3[10];
  int i, len1, len2, len3, maxlen;
  printf("文字列1：");
  scanf("%s", s1);
  printf("文字列2：");
  scanf("%s", s2);
  printf("文字列3：");
  scanf("%s", s3);

  len1 = 0;
  maxlen = 0;
  for (i = 0; s1[i] != '\0'; i++) {
    len1++;
    if(len1 > maxlen) {
      maxlen ++;
    }
  }

  len2 = 0;
  for (i = 0; s2[i] != '\0'; i++) {
    len2++;
    if(len2 > maxlen) {
      maxlen ++;
    }
  }

  len3 = 0;
  for (i = 0; s3[i] != '\0'; i++) {
    len3++;
    if(len3 > maxlen) {
      maxlen ++;
    }
  }

  printf("もっとも長い文字列：\n");

  if(maxlen == len1) {
    printf("%s\n", s1);
  }

  if(maxlen == len2) {
    printf("%s\n", s2);
  }

  if(maxlen == len3) {
    printf("%s\n", s3);
  }

  return 0;
}