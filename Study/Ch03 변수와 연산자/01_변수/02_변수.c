/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 변수
	교재 51 ~ 53p

	값을 저장할 수 있는 메모리 공간에 붙은 이름,
	혹은 메모리 공간 자체를 가리켜 변수(variable)라 한다

	변수를 사용하기 위해서는 다음과 같이 변수를 선언해야 한다
		int num;	// num이라는 변수 선언
		
	여기서 int는 정수의 저장이 가능한 메모리 공간을 할당합니다.
	그리고 그 메모리 공간을 이름을 num이라 합니다

	대입연산자(=)를 이용해 데이터를 담는다


*/

#include <stdio.h>

int main(void)
{

	int num1, num2;				// 변수 num1, num2의 선언
	int num3 = 30, num4 = 40;	// 변수 num3, num4의 선언 및 초기화

	// printf("num1: %d, num2: %d", num1, num2);	// 초기화되지않은 변수 사용으로 컴파일 에러 발생
													// 이 경우 쓰레기 값이 담긴다
													// 쓰레기 값이란 아무런 의미가 없는 값을 의미한다

	num1 = 10;					// 변수 num1의 초기화
	num2 = 20;					// 변수 num2의 초기화

	printf("num1: %d, num2: %d", num1, num2);	// num1: 10, num2: 20
	printf("num3: %d, num4: %d", num3, num4);	// num3: 30, num4: 40
	return 0;
}