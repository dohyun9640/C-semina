#include <stdio.h>

int age = 20;
float height = 123.4f;
char blood_type = 'A';
int main() {
    printf("나이: %d\n", age);   // int = 정수형 = %d
    printf("키: %.1f\n", height); // float = 실수형 = %f, 소수점 아래 1자리까지 출력하기 위해 %.1f 사용
    printf("혈액형: %c\n", blood_type); // char = 문자형 = %c
    return 0;
}