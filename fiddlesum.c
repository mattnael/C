#include <stdio.h>

int main(){
	
	int N;
	scanf("%d", &N);
	
	int arr[N], sum = 0;
	int min = 10001;
	int max = -10001;
	
	int i;
	for(i = 0; i < N; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	for(i = 0; i < N; i++){
		if(arr[i] < max && arr[i] > min){
			sum += arr[i];
		}
	}

	
	printf("FiddleSum:  %d\n", sum);
	
	return 0;
}
