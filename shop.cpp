#include <stdio.h>

int main() {
    int X[4]; 
    int Y[4]; 

    
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &X[i], &Y[i]);
    }

    
    for (int i = 0; i < 4; i++) {
        if (X[i] == 0) {
            
            printf("%.2f\n", (float)Y[i]);
        } else {
            
            float originalPrice = Y[i] / (1 - (X[i] / 100.0));
            printf("%.2f\n", originalPrice);
        }
    }
// Variabelnya ganti aja kalau mau tinggal ikutin yang X Y X Y nya 
    return 0;
}
