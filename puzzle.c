#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("Invalid turu size.\n");
        return 1;
    }

    int turu[N][N];
    bool bjir = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &turu[i][j]);

            if (turu[i][j] < 1 || turu[i][j] > N) {
                printf("Invalid turu element at (%d, %d).\n", i + 1, j + 1);
                return 1;
            }
        }
    }

    for (int i = 0; i < N && bjir; i++) {
        bool cekRow[N + 1];
        for (int k = 0; k <= N; k++) {
            cekRow[k] = false;
        }
        for (int j = 0; j < N; j++) {
            if (cekRow[turu[i][j]]) {
                bjir = false;
                break;
            }
            cekRow[turu[i][j]] = true;
        }
    }

    for (int j = 0; j < N && bjir; j++) {
        bool cekkolom[N + 1];
        for (int k = 0; k <= N; k++) {
            cekkolom[k] = false;
        }
        for (int i = 0; i < N; i++) {
            if (cekkolom[turu[i][j]]) {
                bjir = false;
                break;
            }
            cekkolom[turu[i][j]] = true;
        }
    }

    if (bjir) {
        printf("Yay\n");
    } else {
        printf("Nay\n");
    }

    return 0;
}
