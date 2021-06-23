/* 상수 */
#include <stdio.h>

int main() {
    const int a = 3;

    printf("%d", a);
    return 0;
}

// 에러
#include <stdio.h>

int main() {
    const int a;

    printf("%d", a);
    return 0;
}

// 에러
#include <stdio.h>
int main() {
    const int a = 2;

    a = a + 3;
    printf("%d", a);
    return 0;
}

#include <stdio.h>

int main() {
    int b = 3;
    const int a = b;
    char c[a];
    return 0;
}