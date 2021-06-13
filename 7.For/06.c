/* 다음 소스만 보고 무슨 숫자가 출력될 지 맞추어 보세요~~ */
#include <stdio.h>

int main() {
  int i, j;

  for (i = 1; i < 10; i++) {
    for (j = 1; j < i; j++) {
      printf("%d ", j);
    }
  }

  return 0;
}