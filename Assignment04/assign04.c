/* ���ϸ� Assignment-04.c
 * �ۼ���: ������
 * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷� �ۼ�
 * ��¥: 2025.04.02
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Calculate_work(void)
{
	double force, distance, work;

	printf("��(N)?");
	scanf("%lf", &force);

	printf("�̵��Ÿ�(m)? ");
	scanf("%lf", &distance);

	work = force * distance;

	printf("���� ��: %.2lf", work);

	return;
}

int main()
{
	Calculate_work();
	return 0;
}

