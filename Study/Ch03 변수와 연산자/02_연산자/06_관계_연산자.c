/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 관계 연산자
	교재 63 ~ 65p

	다음과 같은 연산이 있다
		<, >, ==, !=, <=, >= 
		비교 연산자라고도 한다

	조건을 만족하면 1을, 만족하지 않으면 0을 반환한다
	여기서 말하는 1은 참(true)을, 0은 거짓(false)을 의미하는 대표적인 숫자이다
*/

#include <stdio.h>

int main(void)
{

	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);

	printf("result1: %d \n", result1);		// result1: 0
	printf("result2: %d \n", result2);		// result2: 1
	printf("result3: %d \n", result3);		// result3: 0
	return 0;
}