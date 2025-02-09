#include <stdio.h> 
#include "dataku.c" 
#define sum(x, y) (x + y) 
#if( n % 2 == 0)
#define TIPE "Genap" 
#else
#define TIPE "Ganjil" 
#endif

int main (){
printf(TIPE);
printf("\nTanggal hari ini %s", _DATE_); 
printf("\nPukul %s", _TIME_); 
printf("\nKode baris ke-%d", _LINE_);
printf("\nPath file ini adalah %s", _FILE_);

//	 	 
system("pause");
return 0;

}
