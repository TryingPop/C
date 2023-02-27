/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 리터럴 상수
	교재 119 ~ 123p

	변수와 달리 이름이 없는 상수를 가리켜 리터럴(literal) 상수 또는 그냥 리터럴이라 한다

	리터럴 상수는 메모리 공간에 상수의 형태로 순간 저장된다

	. 이 붙으면 실수형 없으면 정수형으로 인식된다

	int형으로 표현 가능한 정수형 상수는 int형으로 메모리 공간에 저장하기로 약속되어져 있다
	또한, double형으로 표현 가능한 실수형 상수는 double형으로 저장하기로 약속되어 있다

	접미사를 통해 리터럴 상수의 형을 설정할 수 있다.
		U : unsigned int
		L : long
		UL : unsigned long
		LL : long long
		ULL : unsigned long long

		F : float
		L : long double

		대소문자 구분하지 않는다 다만 l의 경우 대문자로 적는게 좋다
*/

#include <stdio.h>

int main(void)
{

	int num = 30 + 40;	// 30과 40은 메모리에 저장하고 이를 이용해 연산을 한다
						// 그리고 연산 결과 값인 70을 num에 저장한다
	// 여기서 30과 40이 담긴 리터럴 상수 메모리 해제

	printf("literal int size: %d \n", sizeof(7));				// 4
	printf("literal double size: %d \n", sizeof(3.14));			// 8
	printf("literal char size: %d \n", sizeof('A'));			// 4
	printf("literal unsigned long size: %d \n", sizeof(2UL));	// 4
	printf("literal long double size: %d \n", sizeof(3.14l));	// 8

	return 0;
}