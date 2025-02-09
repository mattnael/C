#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);
        long long maksimal_total = 0; 
        for (int i = 0; i < N; i++) {
            long long maksimal_cokelat = 0;
            for (int j = 0; j < M; j++) {
                long long cokelat;
                scanf("%lld", &cokelat); 

                if (cokelat > maksimal_cokelat) {
                    maksimal_cokelat = cokelat;
                }
            }
            maksimal_total += maksimal_cokelat;
        }
        printf("Case #%d: %lld\n", t, maksimal_total);
    }
    return 0;
}
