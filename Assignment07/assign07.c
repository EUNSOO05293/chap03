/* ���ϸ� Assignment-07.c
 * �ۼ���: ������
 * ����: �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷� �ۼ�
 * ��¥: 2025.04.02
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Squre(void)
{
	double value;
	printf("�Ǽ�");
	scanf("%lf", &value);

	printf("����: %e\n", value * value);
	printf("������: %e\n", value * value * value);
}

int main()
{
	Squre();
	return 0;
}