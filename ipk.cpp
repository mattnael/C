#include <stdio.h>

int main(){
	float ipk;
	
	printf("masukkan nilai IPK mu : ");
	scanf("%f", &ipk);
	
	if(ipk >= 3.5 && ipk <= 4.0) {	printf("Cumlaude");
	} else if(ipk >= 3.0 && ipk <= 3.4) { printf("Outstanding");
	} else if(ipk >= 2.5 && ipk <= 2.9) { printf("Vert Good");
	} else if(ipk >= 2.0 && ipk <= 2.4) { printf("Good");
	} else { 
	printf("Poor");}
		
	return 0;
	
}
