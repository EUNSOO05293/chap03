/* 파일명 Assignment-01.c
 * 작성자: 이은수
 * 내용: 
 * 날짜: 2025.04.02
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Area_perimeter(void) {
    int side;

    printf("한 변의 길이? ");
    scanf("%d", &side);

    printf("정사각형의 넓이: %d\n", side * side);
    printf("정사각형의 둘레: %d\n", 4 * side);
}

int main() {
    Area_perimeter();
    return 0;
}
