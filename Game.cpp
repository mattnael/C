#include <stdio.h>
#include <math.h>
int main(){
	
	int n;
	unsigned long long int hasil;
	
	scanf("%d", &n); getchar();
	
	hasil = pow(2,n) - 1;
	
	printf("%llu\n", hasil);
	
	return 0;
}
