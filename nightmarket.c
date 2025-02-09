#include <stdio.h>

int main() {
    float harga_per_kilo, berat_gram, total_harga;
    scanf("%f", &harga_per_kilo);
    scanf("%f", &berat_gram);
    total_harga = (harga_per_kilo / 1000) * berat_gram;
    printf("%.2f\n", total_harga);
    return 0;
}
