#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 24561

int compareChars(const void *a, const void *b) {
    return *(const char*)a - *(const char*)b;
}

int main() {
    int N;

    if (scanf("%d", &N) != 1 || N <= 0) {
        fprintf(stderr, "Invalid input: N must be a positive integer.\n");
        return 1;
    }

    long long total = 0;
    for (int i = 0; i < N; i++) {
        char num_str[11];
        if (scanf("%s", num_str) != 1) {
            fprintf(stderr, "Invalid input: Failed to read number string.\n");
            return 1;
        }

        int len = strlen(num_str);
        qsort(num_str, len, sizeof(char), compareChars);

        long long num = 0;
        for (int j = 0; j < len; j++) {
            num = num * 10 + (num_str[j] - '0');
            if (num >= MOD) {
                num %= MOD;
            }
        }

        total = (total + num) % MOD;
    }

    printf("%lld\n", total);

    return 0;
}