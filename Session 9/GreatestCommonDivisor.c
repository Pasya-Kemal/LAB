#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

long long int gcd(long long int a, long long int b) {
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int i, j, testcase, num;

    scanf("%d", &testcase);

    for (i = 0; i < testcase; i++) {
        scanf("%d", &num);

        long long int val[num];
        for (j = 0; j < num; j++) {
            scanf("%lld", &val[j]); 
        }

        long long int result = val[0];
        for (j = 1; j < num; j++) {
            result = gcd(result, val[j]); 
            if (result == 1) break; 
        }

        printf("Case #%d: %lld\n", i + 1, result); 
    }

    return 0;
}
