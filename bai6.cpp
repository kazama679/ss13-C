#include <stdio.h>

void selectionSort(int arr[], int n) {
    int swapCount = 0;

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            swapCount++;

            printf("Hoan doi: ");
            for (int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }

    printf("Sap xep hoan thanh voi %d lan hoan doi.\n", swapCount);
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    printArr(arr, n);

    selectionSort(arr, n);

    printf("Mang da sap xep: ");
    printArr(arr, n);

    return 0;
}
