#include <stdio.h>
int rekursif(int n){
	if (n==0){
		return 0;
	}
	return n + rekursif (n-1);
}


int main(){
	int number = rekursif(4);
	printf("%d", number);
	
	return 0;
	
}
