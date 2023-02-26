/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 부호연산의 의미를 갖는 연산자
	교재 59 ~ 60p

	+, - 연산자는 피연산자가 하나인 단항 연산자로서 부호를 뜻하기도 한다
	
	복합 대입 연산자와 부호 연산자 구분히 힘들 수 있다
		num=-num;	// 부호 연산자의 사용
		num-=num;	// 복합 대입 연산자의 사용

	연산자 사이에 공백을 두어 혼란을 최소화 하도록 하는 것이 좋다
		num =- num;	// 부호 연산자의 사용
		num -= num;	// 복합 대입 연산자의 사용
	
	이와 관련된 예제를 보자
*/

#include<stdio.h>

int main(void)
{

	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1: %d \n", num1);	// -2

	num2 = -num2;
	printf("num2: %d \n", num2);	// 4
	return 0;
}