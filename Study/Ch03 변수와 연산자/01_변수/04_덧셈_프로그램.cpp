/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 덧셈 프로그램
	교재 55 ~ 56p

	두 변수에 저장된 값을 대상으로 덧셈을 진행하고,
	그 결과를 변수에 저장해서 다양한 형태로 출력
*/

#include<stdio.h>

int main(void)
{

	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d \n", , result);							// 덧셈 결과: 7
	printf("%d + %d = %d \n", num1, num2, result);					// 3 + 4 = 7
	printf("%d와(과) %d의 합은 %d입니다.\n", num1, num2, result);	// 3와(과) 4의 합은 7입니다.
	return 0;
}