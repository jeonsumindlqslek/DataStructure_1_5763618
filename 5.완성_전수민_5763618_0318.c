//사칙연산 함수 정의 add(int, int): 두 정수의 합을 반환 / subtract(int, int): 두 정수의 차를 반환 /
// multiply(int, int): 두 정수의 곱을 반환 / divide(float, float): 정수를 실수로 받아서 나눗셈의 결과 반환.
// 메인함수: 두 정수를 입력받음, 사칙연산의 결과를 출력함

#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

// 뺄셈 함수
int subtract(int num1, int num2) {
    return num1 - num2;
}

// 곱셈 함수
int multiply(int num1, int num2) {
    return num1 * num2;
}

// 나눗셈 함수
float divide(float num1, float num2) {
    return num1 / num2;
}

int main(void) {
    int num1, num2;

    // 사용자로부터 양의 정수 입력받기
    printf("첫 번째 양의 정수를 입력하세요: ");
    scanf_s("%d", &num1);

    printf("두 번째 양의 정수를 입력하세요: ");
    scanf_s("%d", &num2);

    // 사칙연산 결과 출력
    printf("덧셈: %d\n", add(num1, num2));
    printf("뺄셈: %d\n", subtract(num1, num2));
    printf("곱셈: %d\n", multiply(num1, num2));
    printf("나눗셈: %.2f\n", divide((float)num1, (float)num2));

    return 0;
}
