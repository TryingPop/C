/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : 중첩 while 반복문
	교재 155 ~ 156p

	while문의 중첩은 while문 안에 while문이 포함된 상황을 뜻한다
	따라서 while문의 중첩은 새로운 문법의 이해를 요구하지 않는다

	아래는 while문 중첩을 이용한 구구단 코드이다
*/

#include<stdio.h>

int main(void)
{

	int dan = 2, num = 0;

	while (dan < 10) {	// 2단부터 9단까지 반복
		
		num = 1;	// 새로운 단의 시작

		while (num < 10) {	// 각 단의 1부터 9의 곱을 표현

			printf("%d x %d = %d", dan, num, dan * num);
			num++;
		}

		dan++;	// 다음 단으로 넘어가기 위한 증가
	}

	return 0;
}