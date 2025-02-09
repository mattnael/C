#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sumWithoutCarry(char* A, char* B, char* result) {
    int lenA = strlen(A);
    int lenB = strlen(B);
    int maxLen = (lenA > lenB) ? lenA : lenB;

    
    char temp[maxLen + 1];
    temp[maxLen] = '\0';  

    int i = lenA - 1, j = lenB - 1, k = maxLen - 1;

    while (k >= 0) {
        int digitA = (i >= 0) ? A[i] - '0' : 0;
        int digitB = (j >= 0) ? B[j] - '0' : 0;
        
        int sumDigit = (digitA + digitB) % 10;
        temp[k] = sumDigit + '0';  

        i--; j--; k--;
    }

    
    int start = 0;
    while (temp[start] == '0' && temp[start + 1] != '\0') {
        start++;
    }

    strcpy(result, temp + start);  
}

int main() {
    int T, i;
    scanf("%d", &T);

    
    char** output = (char**)malloc(T * sizeof(char*));
    for (i = 0; i < T; i++) {
        output[i] = (char*)malloc(1000002 * sizeof(char));
    }

    char A[1000002], B[1000002];
    int t;

    for (t = 0; t < T; t++) {
        scanf("%s %s", A, B);
        sumWithoutCarry(A, B, output[t]);  
    }

    
    for (t = 0; t < T; t++) {
        printf("Case #%d: %s\n", t + 1, output[t]);
    }

    
    for (i = 0; i < T; i++) {
        free(output[i]);
    }
    free(output);

    return 0;
}

