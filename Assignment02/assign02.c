/* ���ϸ� Assignment-02.c
 * �ۼ���: ������
 * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷� �ۼ�
 * ��¥: 2025.04.02
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Oblong(void)
{
	int width, height, result;

	printf("������ ����?");
	scanf("%d", &width);

	printf("������ ����?");
	scanf("%d", &height);

	result = width * height;
	printf("���簭���� ����: %d\n", result);

	result = 2 * (width + height);
	printf("���簢���� �ѷ�: %d\n", result);
}

int main()
{
	Oblong();
	return 0;
}