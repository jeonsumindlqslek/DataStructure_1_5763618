#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("문자열을 입력하세요 : ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = '\0';

	int length = strlen(str);;

	printf("문자열 길이 : %d\n", length);

	printf("변환된 문자열 : ");
	for (int i = 0; i < length; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			putchar(str[i] + 32);  // 대문자는 소문자로 변환
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			putchar(str[i] - 32);  // 소문자는 대문자로 변환
		}
		else {
			putchar(str[i]);  // 그 외 문자는 그대로 출력
		}
	}

	return 0;
}
