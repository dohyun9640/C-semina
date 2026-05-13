#include <stdio.h>

int main() {
    int N, M;
    int max = -2147483648;
    int target_row = 1, target_col = 1;
    int current_val;

    if (scanf("%d %d", &N, &M) != 2) return 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &current_val);

            if (current_val > max) {
                max = current_val;
                target_row = i + 1;
                target_col = j + 1; 
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d\n", target_row, target_col);

    return 0;
}