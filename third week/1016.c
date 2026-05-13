#include <stdio.h>

void getSum(int *arr, int n, int *result) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += *(arr + i);
    }
    *result = total; 
}

int main() {
    int N;
    int arr[100];
    int sum = 0;

    if (scanf("%d", &N) != 1) return 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    getSum(arr, N, &sum);

    printf("%d\n", sum);

    return 0;
}