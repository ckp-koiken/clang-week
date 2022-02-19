/*
  probex5-5と同じ内容をstrcmp()関数を使わないで作りたい
*/

#include <stdio.h>
#include <string.h>

int main() {
  char s1[10], s2[10];
  int i, len1, len2, check1, check2;
  printf("文字列1：");
  scanf("%s", s1);
  printf("文字列2：");
  scanf("%s", s2);

  check1 = 0;
  check2 = 0;
  len1 = 0;
  len2 = 0;
  for(i = 0; s1[i] != '\0'; i++) {
    if(s1[i] == s2[i]) {
      check1++;
    }
  }

  for(i = 0; s2[i] != '\0'; i++) {
    if(s2[i] == s1[i]) {
      check2++;
    }
  }

  while (s1[len1] != '\0'){
    len1++;
  }

  while (s2[len2] != '\0'){
    len2++;
  }

  if(check1 == check2 == len1 == len2) {
    printf("同じものです\n");
  } else {
    printf("異なるものです\n");
  }

  return 0;
}