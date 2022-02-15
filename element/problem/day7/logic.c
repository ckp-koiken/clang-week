#include "logic.h"
#include <stdlib.h>
#include <time.h>

// プレイヤーの手
int player = 0;

// コンピュータの手
int computer = 0;

// 初期化
void init() {
  srand((unsigned)time(NULL));
}

// プレイヤーの手を設定
void setPlayer(int num) {
  player = num;
}

// 指定した範囲の乱数を発生 
void setComputer(int num) {
  computer = rand() % 3;
}
