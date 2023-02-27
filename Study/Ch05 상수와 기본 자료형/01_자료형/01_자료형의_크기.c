/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 기본 자료형의 크기
	교재 106 ~ 110p

	자료형은 데이터를 표현하는 방법이다
	정수형인지 실수형인지 구분하고 또한 메모리 공간을 어느만큼 할당할지 결정한다

	자료형으로는 다음과 같다
		정수형
			char		1바이트			-128 ~ 127
			short		2바이트			-32,768 ~ 32,767
			int			4바이트			-2,147,483,648 ~ 2,147,483,647
			long		4바이트			-2,147,483,648 ~ 2,147,483,647
			long long	8바이트			-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

		실수형
			float		4바이트			+- 3.4*10^-37 ~ 3.4*10^38 
			double		8바이트			+- 1.7*10^-307 ~ 1.7*10^308
			long double 8바이트 이상	double 이상의 표현 범위

		일부 컴파일러와 약간의 차이를 보일 수 있다

	sizeof 연산자를 이용해 자료형의 크기를 확인해보자
	변수의 경우 소괄호가 필요없으나 자료형의 이름에는 소괄호가 필수이다
	하지만 피연산자의 종류에 상관없이 소괄호를 사용하는게 일반적이다
*/

#include <stdio.h>

int main(void)
{
	int num = 12;

	printf("num: %d \n\n", sizeof num);					// 4
														// sizeof 가 연산자임을 보여준다

	printf("char: %d \n", sizeof(char));				// 1
	printf("short: %d \n", sizeof(short));				// 2
	printf("int: %d \n", sizeof(int));					// 4
	printf("long: %d \n", sizeof(long));				// 4

	printf("long long: %d \n", sizeof(long long));		// 8
	printf("float: %d \n", sizeof(float));				// 4
	printf("double: %d \n", sizeof(double));			// 8
	printf("long double: %d \n", sizeof(long double));	// 8
	return 0;
}