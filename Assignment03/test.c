#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcPositionEnergy(int weight, int height)
{
	double energy;
	energy = 9.8 * weight * height;
	return energy;
}

void assignment03(void)
{
	int kg, m;
	double energy;


	printf("질랑(kg)?");
	scanf("%d", &kg);

	printf("높이(m)?");
	scanf("%d", &m);

	energy = calcPositionEnergy(kg, m);
	printf("위치에너지: %6.1lf\n", energy);

	return;
}

int main()
{
	assignment03();
	return 0;
}
