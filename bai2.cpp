#include<stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int min=i;
		for(int j=i+1; j<n; j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		swap(&arr[min], &arr[i]);
	}
} 

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[] = {12,41,24,1,521,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	printArr(arr, n);
	return 0;
}
