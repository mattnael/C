#include <stdio.h>

float menghitung_energi_potensial(float massa, float tinggi) {
    return massa * 9.8 * tinggi;
}

float menghitung_energi_kinetik(float massa, float kecepatan) {
    return 0.5 * massa * kecepatan * kecepatan;
}

float menghitung_energi_mekanik(float energi_potensial, float energi_kinetik) {
    return energi_potensial + energi_kinetik;
}

int main() {
    float massa, tinggi, kecepatan, massa1, energi_potensial, energi_kinetik, energi_mekanik;

    printf("Ayo Menghitung Energi dalam Ilmu Fisika\n");
    printf("Ketik 1 untuk menghitung Energi Potensial\n");
    printf("Ketik 2 untuk mennghitung Energi Kinetik\n");
    printf("Ketik 3 untuk menghitung Energi Mekanik\n");
    
    int option;
    scanf("%d", &option);

    switch (option) {
        case 1:
        	printf("Untuk Menghitung Energi Potensial kita dapat menggunakan rumus massa * gravitasi * tinggi yang dimana gravitasi memilikinilai konstan yaitu 9.8\n\n");
            printf("Masukkan Massa (dalam KG): ");
            scanf("%f", &massa);
            printf("Masukkan tinggi dalam meter: ");
            scanf("%f", &tinggi);
            energi_potensial = menghitung_energi_potensial(massa, tinggi);
            printf("Energi Potensial: %.2f J\n", energi_potensial);
            break;
        case 2:
        	printf("Untuk Menghitung Energi Kinetik kita dapat menggunakan rumus 1/2 * massa * kecepatan * kecepatan (kecepatan kuadrat)\n\n");
            printf("Masukkan Massa: ");
            scanf("%f", &massa);
            printf("Masukkan Kecepatan: ");
            scanf("%f", &kecepatan);
            energi_kinetik = menghitung_energi_kinetik(massa, kecepatan);
            printf("Energi Kinetik: %.2f J\n", energi_kinetik);
            break;
        case 3:
        	printf("Untuk Menghitung Energi Mekanik menggunakan rumus Energi Potensial + Energi Kinetik\n");
        	printf("Yang Berarti rumus untuk Energi Mekanik adalah :\n");
        	printf("(Massa * Gravitasi * Tinggi) + (1/2 * Massa * Kecepatan * Kecepatan)\n");
            printf("Masukkan Massa(Energi Potensial): ");
            scanf("%f", &massa);
            printf("Masukkan Tinggi: ");
            scanf("%f", &tinggi);
            printf("Masukkan Massa(Energi Kinetik): ");
            scanf("%f", &massa1);
            printf("Masukkan Kecepatan: ");
            scanf("%f", &kecepatan);
            energi_potensial = menghitung_energi_potensial(massa, tinggi);
            energi_kinetik = menghitung_energi_kinetik(massa1, kecepatan);
            energi_mekanik = menghitung_energi_mekanik(energi_potensial, energi_kinetik);
            printf("Energi Mekanik: %.2f J\n", energi_mekanik);
            break;
       
    }

    return 0;
}
