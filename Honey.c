#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int hasil[T];
    for (int t = 1; t <= T; t++) {
        int A, B;
        scanf("%d %d", &A, &B);
        int total_madu = A;
        int botol_kosong = A;
        while (botol_kosong >= B) {
            int botol_baru = botol_kosong / B;
            total_madu += botol_baru;
            botol_kosong = botol_kosong % B + botol_baru; 
        }
        hasil[t - 1] = total_madu;
    }
    for (int t = 1; t <= T; t++) {
        printf("Case #%d: %d\n", t, hasil[t - 1]);
    }
    return 0;
}
