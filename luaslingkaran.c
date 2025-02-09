#include <stdio.h>
#define pi 3.14

float luasLingkaran(int r){
	return pi * r * r;
	
	
}

int main(){
	int r;
	printf("Masukkan Jari - jari : ");
	scanf("%d", &r);
	
	printf("Luas Lingkaran tersebut = %.2f\n", luasLingkaran(r));
	
	return 0;
}
