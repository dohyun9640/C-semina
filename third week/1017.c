#include <stdio.h>

int main() {
    char s1[105], s2[105];
    char *ptr;

    scanf("%s", s1);
    scanf("%s", s2);

    int i = 0;
    int result = 0;

    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] < s2[i]) {
            result = -1;
            break;
        } else if (s1[i] > s2[i]) {
            result = 1; 
            break;
        }
        i++;
    }

    if (result <= 0) {
        ptr = s1;
    } else {
        ptr = s2;
    }

    printf("%s\n", ptr);

    return 0;
}