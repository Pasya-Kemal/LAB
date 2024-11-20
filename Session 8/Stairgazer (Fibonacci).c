#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("1\n");
        return 0;
    }

    int a = 1, b = 2, temp, i;
    for (i = 3; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("%d\n", b);

    return 0;
}

