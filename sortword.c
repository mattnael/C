#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 1000
#define MAX_LENGTH 101

int main() {
    int N, X;
    char words[MAX_WORDS][MAX_LENGTH];

    scanf("%d", &N);

    if (N < 1 || N > 1000) {
        printf("Invalid input: N must be between 1 and 1000.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
    }

    scanf("%d", &X);

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if ((X == 0 && strcmp(words[i], words[j]) > 0) || 
                (X != 0 && strcmp(words[i], words[j]) < 0)) {
                char temp[MAX_LENGTH];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
