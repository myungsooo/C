/* 배열 기초 */
#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Array 3 번째 원소 : %d \n ", arr[2]);
    // printf("Array 11 번째 원소? : %d \n ", arr[10]); 경우에 따라서는 아예 오류를 내고 종료될 수 도 있습니다.
    return 0;
}
