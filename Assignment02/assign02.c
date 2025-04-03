#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int width, height, result;
	
	printf("가로의 길이?");
	scanf("%d", &width);

	printf("세로의 길이?");
	scanf("%d", &height);

	result = width * height;
	printf("직사강형의 넓이: %d\n", result);

	result = 2 * (width + height);
	printf("직사각형의 둘레: %d\n", result);

	return 0;
	
}