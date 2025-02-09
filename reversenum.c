#include <stdio.h>

int reverse(int num) {
    int reversed = 0;

    while (num != 0) {
        int remainder = num % 10; 
        reversed = reversed * 10 + remainder; 
        num /= 10; 
    }

    return reversed;
}

int main() {
    int x;
    scanf("%d", &x);
    int reversed_number = reverse(x);
    printf("%d\n", reversed_number);

    return 0;
}

