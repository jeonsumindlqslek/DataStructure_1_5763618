#include <stdio.h>

int main() {
    int num;

    // 사용자로부터 입력 받기
    printf("정수를 입력하세요: ");
    scanf_s("%d", &num);  // 사용자 입력을 num에 저장

    unsigned int mask = 1 << 31;  // 32비트의 최상위 비트 (가장 왼쪽 비트)

    printf("입력 숫자: %d\n", num);
    printf("이진수 표현: ");

    // 32비트 이진수로 출력
    for (int i = 0; i < 32; i++) {
        if (num & mask) {
            printf("1");
        }
        else {
            printf("0");
        }
        num <<= 1;  // 왼쪽으로 한 비트씩 이동
    }

    printf("\n");
    return 0;
}