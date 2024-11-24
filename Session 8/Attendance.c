#include <stdio.h>

int main() {
    int N, i, j;

    scanf("%d", &N);

    int arr[N][N];
    int team[N + 1];

    for (i = 1; i <= N; i++) {
        team[i] = 0;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > 0 && arr[i][j] <= N) {
                team[arr[i][j]]++;
            }
        }
    }

    int incomplete_teams = 0;
    for (i = 1; i <= N; i++) {
        if (team[i] < N) {
            incomplete_teams++;
        }
    }

    printf("%d\n", incomplete_teams);

    return 0;
}

