/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 정수 자료형의 선택
	교재 110 ~ 112p

	저장할 변수의 사료형을 선택할 때, 
	가장 먼저 생각할 문제는 저장하고자 하는 값의 범위이다
	short형 변수가 저장할 수 있는 값의 범위는 -32,768 ~ 32,767이다
	이를 넘어서는 정수를 저장하려면 int를 선언해야한다
	그러면 -32,768 ~ 32,767 범위 안인 경우면 int형 변수를 대신해서 
	short형 변수를 선언하는 것이 효율적일까에 대한 답은 상황에 따라 다르다

	일반적으로 cpu가 처리하기에 가장 적합한 크기의 정수 자료형은 int로 정의한다
	따라서 int형 연산의 속도가 다른 자료형의 연산속도에 비해서 동일하거나 더 빠르다

	데이터의 양이 많아서 연산속도보다 데이터의 크기를 줄이는 것이 더 중요한 데이터들의 경우
	char나 short 같은 자료형 변수가 유용하게 사용된다

	아래의 예제로 보자
*/

#include <stdio.h>

int main(void)
{

	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));	// size of num1 & num2: 1, 1
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));	// size of num3 & num4: 2, 2

	printf("size of char add: %d \n", sizeof(num1 + num2));					// size of char add: 4
	printf("size of short add: %d \n", sizeof(num3 + num4));				// size of short add: 4
																			// int형 데이터로 형 변환해서 연산을 한다
																			// 그리고 덧셈 결과가 int형으로 반환되었기에 크기가 4이다

	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));	// size of result1 & result2: 1, 2
	return 0;
}