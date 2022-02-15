#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  double x1, x2, y1, y2, x3, y3, distance;
  scanf("%lf", &x1);
  printf("1つ目のベクトルのX：%lf\n", x1);
  scanf("%lf", &y1);
  printf("1つ目のベクトルのY:%lf\n", y1);
  scanf("%lf", &x2);
  printf("2つ目のベクトルのX:%lf\n", x2);
  scanf("%lf", &y2);
  printf("2つ目のベクトルのX:%lf\n", y2);
  x3 = x1 - x2;
  y3 = y1 - y2;

  distance = sqrt(pow(x3, 2.0) + pow(y3, 2.0));

  printf("(%lf, %lf)と(%lf, %lf)の距離はi%lfです。\n", x1, y1, x2, y2, distance);
  return 0;
}

