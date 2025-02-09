#include <stdio.h>

int pembulat(double f){
	f = f * 100;
	int num1, lastnum;
	int desimal = (int)f % 100;
	num1 = desimal / 10;
	lastnum = desimal % 10;
	if(num1 % 2 == lastnum % 2){
		return 1;
	} else{
		return 0;
	}
}

int main(){
	double f;
	scanf("%lf", &f);
	int hasil = pembulat(f);
	
	printf("%d\n", hasil);

	
	return 0;
}
