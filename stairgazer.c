#include <stdio.h>


int main() {
    int num, i;
    scanf("%d", &num);
    int cara[num];
    cara[0] = 1;
    cara[1] = 1;
    for (i = 2; i <= num; i++) {
        cara[i] = cara[i - 1] + cara[i - 2];
    }
    if(num == 0 || num == 1){
        printf("1\n");
    } else {
        printf("%d\n", cara[num]);
    }
}
