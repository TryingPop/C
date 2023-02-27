/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 증가, 감소 연산자
	교재 62 ~ 63p

	감소 연산자로 알아보자
*/

#include<stdio.h>

int main(void)
{

	int num1 = 10;
	int num2 = (num1--) + 2;		// 소괄호 영향을 받지 않고, 
									// 다음 문장으로 넘어가야만
									// 비로소 값의 증가 및 감소가 이뤄진다

	printf("num1: %d \n", num1);	// 9
	printf("num2: %d \n", num2);	// 12
	return 0;
}