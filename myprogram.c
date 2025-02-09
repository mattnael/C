#include <stdio.h>

int main(int argc, char *argv[])
{
printf("Total argument: %d\n", argc); printf("%s\n", argv[1]);
printf("%s\n", argv[2]);

int sum = atoi(argv[1]) + atoi(argv[2]);
printf("Sum of %s and %s is %d", argv[1], argv[2], sum); printf("\nand the program %s.", argv[3]);


int A, B = 10; double C, D = 5.4;
int arrINT[] = {A, B}; double arrDOUBLE[] = {C, D};
printf("\nsize of arrINT is %d", sizeof(arrINT)); printf("\nsize of arrDOUBLE is %d", sizeof(arrDOUBLE));

//end of algorithm system("pause"); return 0;
}

