#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int low, int high) { // partition the array (divide into parts)
    int pivot = arr[high]; // central point
    int i = (low - 1); // lowest number

    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) { // decending
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i + 1] and arr[high] (pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

// Quicksort 
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // partitioning index

        quicksort(arr, low, pi - 1);  // recursively sort left subarray
        quicksort(arr, pi + 1, high); // recursively sort right subarray
    }
}

int main() {
    int tc;
    scanf("%d", &tc);

    for (int t = 0; t < tc; t++) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Perform quicksort
        quicksort(arr, 0, n - 1);

        // Calculate the maximum sum of two largest numbers
        int maxSum = arr[0] + arr[1];
        printf("Case #%d: %d\n", t + 1, maxSum);
    }

    return 0;
}
