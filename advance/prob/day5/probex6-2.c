#include <stdio.h>
#include <string.h>

#define STUDENT_NUM (5)

/* 名前、学生番号、性別、学年を構造体student_dataにまとめて表現したい */



typedef struct {
  char name[256];  // 学生の名前
  int id;  // 学生番号
  int sex;  // 性別（性別 0：男 1：女）
  int grade;  // 学年  
}student_data;

int main() {
  int i;
  // student_dataを使って表現
  student_data data[] = {
    {"青木一", 1001, 0, 1}, 
    {"遠藤京子", 1002, 1, 1}, 
    {"加藤悟", 1003, 0, 1}, 
    {"佐々木八重子", 1004, 1, 1}, 
    {"田中徹", 1005, 0, 1}, 
  };

  // 学生のデータの表示
  for(i = 0; i < STUDENT_NUM; i++) {
    printf("名前：%s\n", data[i].name);
    printf("性別：");
    if(data[i].sex == 0) {
      printf("男\n");
    } else {
      printf("女\n");
    }
    printf("学生番号：%d\n", data[i].id);
    printf("学年：%d\n\n", data[i].grade);
  }

  return 0;
}
