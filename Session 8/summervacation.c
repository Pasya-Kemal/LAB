#include <stdio.h>

int main() {
    int tc, N, i, j, k, l;
    scanf("%d", &tc);
    for(i = 1; i <= tc; i++){
        scanf("%d", &N);
        int arr[200];
    for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[j]);
		}
    
     int arrcheck[200] = {0};
     int total;
     int totalSum = 0;
     
    for(j = 1; j <= N; j++){
            
            for(j = 0; j < N; j++){
                for(k = j + 1; k < N; k++){
                    total = arr[j] + arr[k];
                    for(l = 0; l < N; l++){
                        if (total == arr[l] && arrcheck[l] == 0){
						arrcheck[l] = 1;
						totalSum++;
					}
                    }
                }
            }
        }
        printf("Case #%d: %d\n", i, totalSum);
    }

    return 0;
}
