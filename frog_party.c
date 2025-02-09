#include <stdio.h>

int main(){
	
	int t;
	int n, m;
	
	scanf("%d", &t);
	
	int hasil[t];
	
	int i;
	for(i = 0; i < t; i++){
		scanf("%d %d", &n, &m);
		int kodok = n * m;
		if(kodok % 2 == 0){
			hasil[i] = 1;
		} 
		else{
			hasil[i] = 0;
		}
	}
	
	for(i = 0; i < t; i++){
		if(hasil[i] == 1){
			printf("Case #%d: Party time!\n", i+1);
		} else{
			printf("Case #%d: Need more frogs\n", i+1);
			}
		}
		
	
	
	return 0;
}
