#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char name[101], id[9];
	char first_letter, last_letter;
	int len_id, middle_index;
	
	fgets(name, sizeof(name), stdin);
	scanf("%s", id);
	
	name[strcspn(name, "\n")] = '\0';
	
	first_letter = toupper(name[0]);
	
	char *last_space = strrchr(name, ' ');
	if (last_space) {
		last_letter = toupper(last_space[strlen(last_space) - 1]);
	} else {
		last_letter = toupper(name[strlen(name) - 1]);
	}
	
	len_id = strlen(id);
	
	char first_digit = id[0];
	char last_digit = id[len_id - 1];
	
	middle_index = (len_id % 2 == 0) ? (len_id / 2) : (len_id / 2);
	char middle_digit = id[middle_index];
	
	printf("%c%c%c%c%c\n", first_letter, last_letter, first_digit, middle_digit, last_digit);
	
	return 0;
}
