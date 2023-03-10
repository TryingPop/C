/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 비트연산자
	교재 98 ~ 100p

	비트의 왼쪽 이동 <<과 오른쪽 이동 >>
	
	왼쪽 이동해서 빈칸이 생겨진 경우 0으로 채워진다
	왼쪽 비트들의 값은 기존의 값 상관없이 버려진다

	오른쪽 이동의 경우 CPU마다 다르다
	음의 값을 유지하기 위해 1로 채울 수 있고,
	그냥 0을 채울 수 있기 때문이다
	현재는 전자를 따른다
*/

#include<stdio.h>

int main(void)
{

	int num1 = 15;	// 00000000 00000000 00000000 00001111
	int num2 = -16;	// 11111111 11111111 11111111 11110000

	int lresult1 = num1 << 1;	// 00000000 00000000 00000000 00011110
	int lresult2 = num1 << 2;	// 00000000 00000000 00000000 00111100
	int lresult3 = num1 << 3;	// 00000000 00000000 00000000 01111000

	int rresult1 = num2 >> 1;	// 11111111 11111111 11111111 11111000
	int rresult2 = num2 >> 2;	// 11111111 11111111 11111111 11111100
	int rresult3 = num2 >> 3;	// 11111111 11111111 11111111 11111110

	printf("왼쪽으로 이동 \n");
	printf("1칸 이동: %d \n", lresult1);	// 30
	printf("2칸 이동: %d \n", lresult2);	// 60
	printf("3칸 이동: %d \n", lresult3);	// 120

	printf("\n\n");			// 줄바꿈

	printf("오른쪽으로 이동 \n");
	printf("1칸 이동: %d \n", rresult1);	// -8
	printf("2칸 이동: %d \n", rresult2);	// -4
	printf("3칸 이동: %d \n", rresult3);	// -2

	return 0;
}