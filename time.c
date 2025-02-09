#include <stdio.h>
#include <string.h>
#include <time.h>

// Fungsi umur
int calculate_age(int year) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int current_year = tm.tm_year + 1900;

    int age = current_year - year;
    return age;
}

int main() {
    FILE *file = fopen("siswa.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    int atas_51 = 0, antara_44_51 = 0, antara_36_43 = 0;
    int antara_28_35 = 0, bawah_28 = 0;

    char line[20];
    while (fgets(line, sizeof(line), file)) {
        int year;
        sscanf(line, "%d", &year);
        year += 1900;  
        int age = calculate_age(year);

        if (age > 51)
            atas_51++;
        else if (age >= 44 && age <= 51)
            antara_44_51++;
        else if (age >= 36 && age <= 43)
            antara_36_43++;
        else if (age >= 28 && age <= 35)
            antara_28_35++;
        else if (age < 28)
            bawah_28++;
    }

    fclose(file);

    printf("Number of employees with age:\n");
    printf("Diatas umur 51: %d\n", atas_51);
    printf("Diantara umur 44 - 51: %d\n", antara_44_51);
    printf("Diantara umur 36 - 43: %d\n", antara_36_43);
    printf("Diantara umur 28 - 35: %d\n", antara_28_35);
    printf("Dibawah umur 28: %d\n", bawah_28);

    return 0;
}
