#include <stdio.h>
#define MOD 1000000007

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = (result * i) % MOD;
    }
    return result;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int arr[100];

        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        long long total = 1;

        for (int i = 0; i < N; i++) {
            total = (total * factorial(arr[i])) % MOD;
        }

        printf("Case #%d: %lld\n", t, total);
    }

    return 0;
}

