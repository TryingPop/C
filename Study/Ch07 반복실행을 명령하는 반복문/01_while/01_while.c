/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : while 반복문
	교재 148 ~ 152p

	while문은 특정 조건을 주고 조건을 만족하는 동안,
	특정영역을 계속해서 반복하는 구조이다

	반복문 안에서도 들여쓰기를 한다
	들여쓰기란 코드를 쉽게 구분 및 분석할 수 있도록 종속관계에 따라서 
	몇 칸 띄운 다음에 코드를 입력하는 것을 뜻한다

	반복의 대상이 하나의 문장이라면 중괄호는 생략이 가능하다
*/

#include<stdio.h>

int main(void)
{

	int num = 0;

	
	while (num < 5) {	// num < 5가 조건, 여기서 5회 반복

		// 조건을 만족하면 아래 구문 실행
		printf("Hellow world! %d \n", num);
		num++;	// 반복문 조건을 무너뜨리기 위한 최소한의 연산
				// 여기까지 연산을 하고 num < 5인지 조건을 확인하러 간다

		// 위의 코드를 다음과 같이 하나의 문장으로 요약 가능
		// printf("Hello world! %d \n", num++);
	}

	return 0;
}