#include <stdio.h>

int main() {
    int num;

    // ����ڷκ��� �Է� �ޱ�
    printf("������ �Է��ϼ���: ");
    scanf_s("%d", &num);  // ����� �Է��� num�� ����

    unsigned int mask = 1 << 31;  // 32��Ʈ�� �ֻ��� ��Ʈ (���� ���� ��Ʈ)

    printf("�Է� ����: %d\n", num);
    printf("������ ǥ��: ");

    // 32��Ʈ �������� ���
    for (int i = 0; i < 32; i++) {
        if (num & mask) {
            printf("1");
        }
        else {
            printf("0");
        }
        num <<= 1;  // �������� �� ��Ʈ�� �̵�
    }

    printf("\n");
    return 0;
}