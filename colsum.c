#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    
    int results[T][500];  
    int sizes[T];         
    
    
    for (int t = 0; t < T; t++) {
        scanf("%d", &N);
        sizes[t] = N;
        int table[N][N];

        
        for (int i = 0; i < N; i++) {
            results[t][i] = 0;
        }

        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int value;
                scanf("%d", &value);
                results[t][j] += value;
            }
        }
    }

    
    for (int t = 0; t < T; t++) {
        printf("Case #%d:", t + 1);
        for (int i = 0; i < sizes[t]; i++) {
            printf(" %d", results[t][i]);
        }
        printf("\n");
    }

    return 0;
}

