#include <stdio.h>

void print_binary(int n) {
    if (n > 1) {
        print_binary(n / 2);
    }
    
    printf("%d", n % 2);
}

int main() {
    int N;
    scanf("%d", &N);

    print_binary(N);
    printf("\n");

    return 0;
}