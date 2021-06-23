#include <stdio.h>

int main() {
    int arr;

    printf("니 값은 모니 : %d", arr);
    return 0;
}

/* 초기화 되지 않은 값 (에러남) */
#include <stdio.h>

int main() {
    int arr[3];
    arr[0] = 1;
    printf("니 값은 모니 : %d", arr[1]);  // arr[0] 이 아닌 arr[1] 을 출력

    return 0;
}

/* 초기화 되지 않은 값 */
#include <stdio.h>
int main() {

  int arr[3] = {1};
  printf("니 값은 모니 : %d", arr[1]);

  return 0;
}