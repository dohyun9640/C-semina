#include <stdio.h>

float main() {
    float score1, score2, score3;
    printf("점수 3개를 입력하세요: ");
    scanf("%f %f %f", &score1, &score2, &score3);
    float Average = (score1 + score2 + score3)/3;
    printf("평균 점수는 %.2f입니다.\n", Average);
    return 0;
}