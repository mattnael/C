#include <stdio.h>

long long F(int n, int *count) {
    if (n == 0) return 1;
    if (n == 1) return 2;

    if (n % 3 == 0) (*count)++;

    if (n % 5 == 0) {
        return n * 2; 
    } else {
        return F(n - 1, count) + n + F(n - 2, count) + (n - 2);
    }
}

int main() {
    int T;
    scanf("%d", &T); 

	int i;
    for (i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);

        int count = 0;
        long long result = F(N, &count);

        printf("Case #%d: %lld %d\n", i, result, count);
    }

    return 0;
}
