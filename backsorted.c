#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define len_strmax 10
#define total_strmax 10

int backSort(const void *a, const void *b){
	const char *str1 = *(const char **)a;
	const char *str2 = *(const char **)b;
	
	int panjang1 = strlen(str1);
	int panjang2 = strlen(str2);
	int i = panjang1 - 1, j = panjang2 - 1;
	
	while(i >= 0 && j >= 0){
		if(str1[i] != str2[j]){
			return (str1[i] > str2[j]) - (str1[i] < str2[j]);
		}
		i--;
		j--;
	}
	return (panjang1 > panjang2) - (panjang1 < panjang2);
}


int main(){
	
	int T;
	scanf("%d", &T);
	
	int i, j;
	for(i = 1; i <= T; i++){
		int N;
		scanf("%d", &N);
		
		char *daftar_str[total_strmax];
		for(j = 0; j < N; j++){
			daftar_str[j] = (char *)malloc((len_strmax + 1) * sizeof(char));
			scanf("%s", daftar_str[j]);
		}
		
		qsort(daftar_str, N, sizeof(char *), backSort);
		
		printf("Case #%d:\n", i);
		for(j = 0; j < N; j++){
			printf("%s\n", daftar_str[j]);
			free(daftar_str[j]);
		}
		
	}
	
	return 0;
}
