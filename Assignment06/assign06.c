/* ���ϸ� Assignment-06.c
 * �ۼ���: ������
 * ����: ����Ʈ�� ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷� �ۼ�
 * ��¥: 2025.04.02
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define m2 = 0.3025


void Convert_area(void)
{
	double squre_master = 0, pyeong = 0;

	printf("����Ʈ�� ����(��������)?");
	scanf("%lf", &squre_master);

	pyeong = squre_master * m2;

	printf("%.2f �������� = %.2f ��", squre_master, pyeong);

	return;
}
int main()
{
	Convert_area();
	return 0;
}

