#include <stdio.h>

void bubbleSort(int arr[], int length){
	int i, j;
	for(int i = 0; i < length; i++){
		for(int j = 0; j < length - 1 - i; j++){
			if(arr[j] > arr[j+1])
			int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
		}
	}
}

int linearSearch(int arr[], int target, int length){
	int i;
	for(i = 0; i<length;i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}


int binarySearch(int arr[], int target, int length){
	int left = 0;
	int right = length - 1;
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(arr[mid] == target){
			return mid;
		}
		else if(arr[mid] < target){
			left = mid + 1;
		}
		else if(arr[mid] > target){
			right = mid - 1;
		}
	}
}

int main(){
	int arr[]= {13, 14, 54, 19, 21, 13};
	int length = sizeof(arr)/sizeof(int);
	bubbleSort(arr, length);
	int target = 13;
	int find = binarySearch(arr, target, length);
	printf("%d ada di index ke-%d\n", target, find);
	return 0;
}
