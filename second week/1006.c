#include <stdio.h>

int score;

int main() {
    printf("점수를 입력하세요: ");
    scanf("%d", &score);
    if (score >= 90) {
        printf("당신의 학점은 A입니다.");
    } else if (score >= 80) {
        printf("당신의 학점은 B입니다.");
    } else if (score >= 70) {
        printf("당신의 학점은 C입니다.");
    } else {
        printf("당신의 학점은 F입니다.");
    }
    return 0;
}