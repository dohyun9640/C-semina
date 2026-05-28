#include <stdio.h>
#include <string.h>

void sort_strings(char *arr[], int n) {
    char *temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    char strings[10][21]; 
    char *ptr_arr[10]; 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
        ptr_arr[i] = strings[i];
    }

    sort_strings(ptr_arr, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", ptr_arr[i]);
    }

    return 0;
}