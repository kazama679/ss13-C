#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, search;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap phan tu can tim: ");
    scanf("%d", &search);

    selectionSort(arr, n);
    printf("Mang sau khi sap xep: ");
    printArr(arr, n);

    int result = binarySearch(arr, n, search);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", search, result + 1);
    } else {
        printf("Khong tim thay phan tu %d trong mang\n", search);
    }

    return 0;
}
