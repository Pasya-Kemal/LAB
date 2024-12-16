/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a; // Untuk mengurutkan dalam urutan menurun
}

int main() {
    int T; // Jumlah test case
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; // Ukuran array
        scanf("%d", &N);

        int *A = (int *)malloc(N * sizeof(int)); // Alokasi memori untuk array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]); // Membaca elemen array
        }

        // Mengurutkan array A dalam urutan menurun
        qsort(A, N, sizeof(int), compare);

        // Mencetak hasil
        printf("Case #%d: ", t);
        for (int i = 0; i < N - 1; i++) {
            printf("%d", A[i] + A[i + 1]); // Menghitung dan mencetak N-1 jumlah terbesar
            if (i < N - 2) {
                printf(" "); // Menambahkan spasi jika bukan elemen terakhir
            }
        }
        printf("\n");

        free(A); // Membebaskan memori yang dialokasikan
    }

    return 0;
}
