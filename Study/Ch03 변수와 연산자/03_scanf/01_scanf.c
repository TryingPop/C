/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : scanf 함수
	교재 70 ~ 71p

	키보드로부터의 정수입력을 위한 scanf 함수

	아래 예제에서
	서식문자 %d 는 10진수 정수형태를 의미한다
	& 변수명은 변수명이 있는 주소에 값을 대입한다
*/

// visual studio에서 scanf를 사용하기 위해 넣는 코드
#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>

int main(void)
{

	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf("%d", &num1);		// 첫 번째 정수 입력
	printf("정수 two: ");
	scanf("%d", &num2);		// 두 번째 정수 입력

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}