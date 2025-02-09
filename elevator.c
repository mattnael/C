#include <stdio.h>

int main(){
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int x = 0;
	int liftA = a;
	int liftB = b;
	
	while(x <= 100){
		if(liftA == liftB && liftB == c){
			printf("%d\n", x);
			return 0;
		}
		
	liftA++;
	liftB--;
	
	if(liftA > 100 || liftB < 0){
		break;
		}
		x++;
	}
	
	printf("-1\n");
	
	return 0;
}
