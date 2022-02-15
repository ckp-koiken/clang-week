#include <stdio.h>
// prob6-10

//関数のプロトタイプ宣言
int gcd(int, int); //最大公約数
int lcm(int, int); //最小公倍数

int main() {
  int gcdnum, lcmnum, m, n;
  printf("1つ目の値を入力してください：");
  scanf("%d", &m);
  printf("2つ目の値を入力してください：");
  scanf("%d", &n);
  printf("1つめ：%d\n", m);
  printf("2つめ：%d\n", n);

  // 最大公約数
    // ユークリッドの互助法を用いる
  gcdnum = gcd(m, n);
  printf("最大公約数：%d\n", gcdnum);

  
  // 最小公倍数
  lcmnum = lcm(m, n);
  printf("最小公倍数：%d\n", lcmnum);

  

  return 0;
}

int gcd(int m, int n) {
  int tmp, r;
  if(m < n) {
    tmp = m;
    m = n;
    n = tmp;
  }

  r = m % n;
  while(r != 0) {
    m = n;
    n = r;
    r = m % n;
  }
  return n;
}

int lcm(int m, int n) {
  int x, tmp, r;
  x = m * n;

  if(m < n) {
    tmp = m;
    m = n;
    n = tmp;
  }

  r = m % n;
  while(r != 0) {
    m = n;
    n = r;
    r = m % n;
  }

  return x/n;
}
