/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : if 조건문
	교재 182 ~ 183p

	3과 또는 4의 배수 출력 예제
*/

#include<stdio.h>

int main(void)
{

	int num;

	for (num = 1; num < 100; num++) {

		if (num % 3 == 0 || num % 4 == 0) {		// num을 3으로 나눴을 때 나머지가 0 또는 num을 4로 나눴을 때 나머지가 0를 확인하는 조건
												// || 연산자가 == 연산자보다 우선순위가 높다

			printf("3또는 4의 배수: %d \n", num);
		}
	}

	return 0;
}