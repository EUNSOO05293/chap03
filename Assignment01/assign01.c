/* ���ϸ� Assignment-01.c
 * �ۼ���: ������
 * ����: �� ���� ���̸� �Է� �޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷� �ۼ�.
 * ��¥: 2025.04.03
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Area_perimeter(void) {
    int side;

    printf("�� ���� ����? ");
    scanf("%d", &side);

    printf("���簢���� ����: %d\n", side * side);
    printf("���簢���� �ѷ�: %d\n", 4 * side);
    return;
}

int main() {
    Area_perimeter();
    return 0;
}
