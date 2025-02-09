#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Recursive function to check if a string is a palindrome
bool isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return true; // base case: if start passes end, it's a palindrome
    }
    if (str[start] != str[end]) {
        return false; // characters do not match, not a palindrome
    }
    return isPalindrome(str, start + 1, end - 1); // recursive call
}

int main() {
    int T = 5; // User can input 5 times
    char str[1001]; // Array to store input strings (length <= 1000)
    
    for (int i = 1; i <= T; i++) {
        printf("Enter string for Case #%d: ", i);
        scanf("%s", str);
        
        int length = strlen(str);
        if (isPalindrome(str, 0, length - 1)) {
            printf("Case #%d: yes\n", i);
        } else {
            printf("Case #%d: no\n", i);
        }
    }
    
    return 0;
}

