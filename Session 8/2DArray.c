#include <stdio.h>

int main() {
    int N, M, Q; 
    scanf("%d %d %d", &N, &M, &Q);

    int array[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            array[i][j] = 0;
        }
    }

    for (int i = 0; i < Q; i++) {
        int X, Y, A;
        scanf("%d %d %d", &X, &Y, &A);
        array[X][Y] = A;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", array[i][j]);
            if (j != M - 1) printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
