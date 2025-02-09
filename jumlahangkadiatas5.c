#include <stdio.h>

int main() {
    FILE *file;          
    int a, b, c;         
    int total;          

    
    file = fopen("angka.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    
    while (fscanf(file, "%d %d %d", &a, &b, &c) != EOF) {
        total = 0; 
        if (a > 5) total += a;
        if (b > 5) total += b;
        if (c > 5) total += c;

        
        printf("%d\n", total);
    }

    
    fclose(file);

    return 0;
}

