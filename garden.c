#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);  

    int garden[x][y];  

    
    int i, j, k;
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            scanf("%d", &garden[i][j]);
        }
    }

    int T;
    scanf("%d", &T);  

    
    for (k = 0; k < T; k++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        garden[a - 1][b - 1] = c;  
    }

    
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%d", garden[i][j]);
            if (j < y - 1) {
                printf(" "); 
            }
        }
        printf("\n");
    }

    return 0;
}

