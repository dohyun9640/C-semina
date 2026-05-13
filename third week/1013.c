#include <stdio.h>

int main () {
    char input[1005];
    char processed[1005];
    int i, len = 0;

    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch != ' ') {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A');
            }
            processed[len++] = ch;
        }
    }
    processed[len] = '\0';

    int isPalindrome = 1;
    if (len == 0) isPalindrome = 0;

    for (i = 0; i < len / 2; i++) {
        if (processed[i] != processed[len -1 -i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}