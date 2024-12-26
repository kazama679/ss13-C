#include<stdio.h>

void bubbleSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int check=0;
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				check=1;
			}
		}
		if(check==0){
			return;
		}
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
	bubbleSort(arr, n);
	printArr(arr, n);
	return 0;
}

