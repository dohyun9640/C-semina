#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", N, sum);
    return 0;
}