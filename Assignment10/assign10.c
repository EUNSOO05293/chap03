/* ���ϸ� Assignment-10.c
 * �ۼ���: ������
 * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ�
 * ��¥: 2025.04.02
  ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void USD_WON(void)
{
	double USD, KRW;

	printf("USD? ");
	scanf("%lf", &USD);

	printf("��/�޷� ȯ��?");
	scanf("%lf", &KRW);

	printf("USD %.2f = KRW %.2f\n", USD, USD * KRW);

	return;
}
int main(void)
{
	USD_WON();
	return 0;
}