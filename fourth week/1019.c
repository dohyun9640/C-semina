#include <stdio.h>
#include <stdlib.h>
int main() {
    int capacity = 5;
    int count = 0;
    int input;

    int *arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        return 1; 
    }

    while (1) {
        scanf("%d", &input);

        if (input == 0) {
            break;
        }

        if (count == capacity) {
            capacity *= 2;
            
            int *temp = (int *)realloc(arr, capacity * sizeof(int));
            
            if (temp == NULL) {
                free(arr);
                return 1; 
            }
            arr = temp;
        }

        arr[count] = input;
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}