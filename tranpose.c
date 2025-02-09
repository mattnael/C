#include <stdio.h>

int main(){
	
	int N;
	scanf("%d", &N); // ukuran matriks
	
	int matriks[101][101];
	int transpose[101][101];
	
	// penginputan matriks
	int i, j;
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			scanf("%d", &matriks[i][j]);
		}
	}
	
	// transpose matriks
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			transpose[j][i] = matriks[i][j];
		}
	}
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%d", transpose[i][j]);
			if(j < N - 1){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
