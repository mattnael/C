#include <stdio.h>

int main(){
	
	int t = 3;
	double a1, b1, c1, d1;
	double a2, b2, c2, d2;
	double a3, b3, c3, d3;
	
	double hasil1, hasil2, hasil3;
	
	// input angka
	scanf("%d");
	scanf("%lf %lf %lf %lf", &a1, &b1, &c1, &d1);
	scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
	scanf("%lf %lf %lf %lf", &a3, &b3, &c3, &d3);
	
	// rumus
	
	hasil1 = (a1/1)*2 + (b1/2)*4 + (c1/3)*4 + (d1/4)*2;
	hasil2 = (a2/1)*2 + (b2/2)*4 + (c2/3)*4 + (d2/4)*2;
	hasil3 = (a3/1)*2 + (b3/2)*4 + (c3/3)*4 + (d3/4)*2;
	
	// output
	
	printf("%.2f\n", hasil1);
	printf("%.2f\n", hasil2);
	printf("%.2f\n", hasil3);
	
	return 0;
}
