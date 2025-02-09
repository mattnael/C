#include <stdio.h>

struct Address{
	char street[40];
	int number;
	char city[20];
	char province[20];
};

struct Dob{
	int date, month, year;
};

typedef struct student{
	int nim;
	char name[20];
	struct Address address;
	struct Dob dateofbirth;
} mhs;



int main(){
	mhs student[5];
	int i = 0;
	while(i < 5){
		scanf("%d", &student[i].nim);
		fflush(stdin);
		gets(student[i].name);
		scanf("%s %d %s %s", &student[i].address.street, &student[i].address.number, &student[i].address.city, &student[i].address.province);
		scanf("%d %d %d", &student[i].dateofbirth.date, &student[i].dateofbirth.month, &student[i].dateofbirth.year);
	}
	
	return 0;
}
