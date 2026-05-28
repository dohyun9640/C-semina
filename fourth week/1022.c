#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[21];
    int score;
} Student;

int main() {
    int N;
    int total_score = 0;
    double average;

    scanf("%d", &N);

    Student *students = (Student *)malloc(N * sizeof(Student));
    if (students == NULL) {
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%s %d", students[i].name, &students[i].score);
        total_score += students[i].score;
    }

    average = (double)total_score / N;

    for (int i = 0; i < N; i++) {
        if (students[i].score >= average) {
            printf("%s %d\n", students[i].name, students[i].score);
        }
    }

    free(students);

    return 0;
}