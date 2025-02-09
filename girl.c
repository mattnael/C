#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    char usernames[T][100001];  

    
    for (int t = 0; t < T; t++) {
        scanf("%s", usernames[t]);
    }

    
    for (int t = 0; t < T; t++) {
        int distinctChars[26] = {0};  
        int distinctCount = 0;

        
        for (int i = 0; usernames[t][i] != '\0'; i++) {
            int index = usernames[t][i] - 'a';
            if (distinctChars[index] == 0) {
                distinctChars[index] = 1;
                distinctCount++;
            }
        }

        
        printf("Case #%d: %s\n", t + 1, (distinctCount % 2 == 0) ? "Yay" : "Ewwww");
    }

    return 0;
}

