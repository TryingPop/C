/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 자동 형 변환
	교재 127 ~ 129p

	앞에서 다음과 같은 내용을 봤다
		일반적으로 CPU가 처리하기에 가장 적합한 크기의 정수 자료형을 int로 정의한다
		따라서 연산의 속도가 다른 자료형의 연산속도에 비해서 동일하거나 더 빠르다

	이에따라 int보다 작은 크기의 정수형 데이터는 int형 데이터로 형 변환이 되어서 연산이 진행된다
	그리고 다시 대입 연산자에서 형변환이 일어나게 된다

	피연산자의 자료형이 일치하지 않아서 발생하는 자동 형 변환은 데이터의 손실을 최소화 하는 방향으로 진행된다
	데이터 손실의 최소화 기준은 다음과 같다
		int > long > long long > float > double > long double

		대소 관계는 형 변환 우선 순위라 보면 된다
		int와 float 의 덧셈을 하는 경우
		int형을 float으로 변환하여 float형 덧셈 연산을 징행하게 된다
*/

#include <stdio.h>

int main(void)
{

	short num1 = 15, num2 = 20;

	printf("short형 정수 num1과 short형 정수 num2의 합의 결과: %d \n", num1 + num2);		// 35
	printf("결과 데이터 크기: %d \n", sizeof(num1 + num2));									// 4

	printf("int형 정수 3과 float형 실수 0.14의 합: %f \n", 3 + 0.14);						// 3.140000
	printf("결과 데이터 크기: %d \n", sizeof(3 + 0.14));									// 4
	return 0;
}