#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    int iteration = 0;
    bool swapped;

    do {
        swapped = false;
        for (int i = 0; i < n - 1 - iteration; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
        iteration++;
        printf("Buoc %d: ", iteration);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } while (swapped);

    printf("Sap xep hoan thanh sau %d lan lap.\n", iteration);
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

    bubbleSort(arr, n);

    printf("Mang da sap xep: ");
    printArr(arr, n);

    return 0;
}
