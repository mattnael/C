#include <stdio.h>
#include <stdlib.h>  

int main() {
    
    int *dinamis;

    dinamis = (int *)malloc(sizeof(int));
    if (dinamis == NULL) {
        printf("Gagal mengalokasikan memori!\n");
        return 1;  
    }
    *dinamis = 10;
    printf("Nilai variabel dinamis: %d\n", *dinamis);
    free(dinamis);
    dinamis = NULL;

    printf("Memori telah dibebaskan.\n");

    return 0;
}

