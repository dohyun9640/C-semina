#include <stdio.h>

int main() {
    int N;
    int arr[100];
    int max = -2147483648;
    int index = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

    }

    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i + 1;

        }
    }
    printf("%d %d\n", max, index);
}
