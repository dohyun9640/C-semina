#include <stdio.h>

int max(int a, int b, int c) {
    int result = a;
    if (b > result) {
        result = b;
    }
    if (c > result) {
        result = c;
    }
    return result;
}

int main() {
    int a,b,c;
    int answer;
    scanf("%d %d %d", &a, &b, &c);
    answer = max(a,b,c);
    printf("%d\n", answer);
    return 0;
}