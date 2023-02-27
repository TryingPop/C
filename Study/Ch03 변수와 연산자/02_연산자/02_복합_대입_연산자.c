/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 복합 대입 연산자
	교재 58 ~ 59p

	다음과 같은 연산자들이다
		*=, /=, %=, +=, -=, <<=, >>=, &=, ^=, |=
		의미는 아래 예제로 보자
*/

#include<stdio.h>

int main(void) 
{

	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3;		// num1 = num1 + 3;
	num2 *= 4;		// num2 = num1 * 4;
	num3 %= 5;		// num3 = num3 % 5;
	printf("Result: %d, %d, %d \n", num1, num2, num3);	// Result: 5, 16, 1
	return 0;
}