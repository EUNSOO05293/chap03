/* ���ϸ� Assignment-03.c
 * �ۼ���: ������
 * ����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ�
 * ��¥: 2025.04.02
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CalcPositionEnergy(int weight, int height)
{
	double energy;
	energy = 9.8 * weight * height;
	return energy;
}

void Assignment03(void)
{
	int kg, m;
	double energy;


	printf("����(kg)?");
	scanf("%d", &kg);

	printf("����(m)?");
	scanf("%d", &m);

	energy = CalcPositionEnergy(kg, m);
	printf("��ġ������: %6.1lf\n", energy);

	return;
}

int main()
{
	Assignment03();
	return 0;
}