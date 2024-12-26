#include <stdio.h>

void insertionSort(int array[], int size, int order) {
    for (int i = 1; i < size; i++) {
        int current = array[i];
        int j = i - 1;

        if (order == 1) {
            while (j >= 0 && array[j] > current) {
                array[j + 1] = array[j];
                j--;
            }
        } else {
            while (j >= 0 && array[j] < current) {
                array[j + 1] = array[j];
                j--;
            }
        }

        array[j + 1] = current;

        printf("Step %d: ", i);
        for (int k = 0; k < size; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}

int main() {
    int size, order;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &order);

    printf("Before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    insertionSort(array, size, order);

    printf("After sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
