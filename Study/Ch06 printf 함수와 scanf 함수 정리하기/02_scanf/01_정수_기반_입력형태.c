/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 정수 기반 입력형태
	교재 144 ~ 145p

	scanf 함수의 서식문자
		%d 10진수 정수의 형태로 데이터를 입력 받는다
		%o 8진수 양의 정수의 형태로 데이터를 입력 받는다
		%x 16진수 양의 정수의 형태로 데이터를 입력받는다

	아래는 정수 기반 입력형태의 예제
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int num1, num2, num3;

	printf("세 개의 정수 입력: ");				
	scanf("%d %o %x", &num1, &num2, &num3);		// 12 12 12 입력 시

	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d \n", num1, num2, num3);	// 12 10 18 출력
	return 0;
}