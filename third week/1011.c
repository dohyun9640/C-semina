#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;

    printf("숫자를 입력하고 Enter를 누르세요: "); 
    
    if (scanf("%d", &N) != 1) return 0;

    if (is_prime(N)) {
        printf("prime\n");
    } else {
        printf("composite\n");
    }

    return 0;
}
