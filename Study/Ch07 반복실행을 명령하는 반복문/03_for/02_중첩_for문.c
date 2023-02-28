/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : 중첩 for 반복문
	교재 167 ~ 168p

	중첩 while 반복문과 같다

	아래는 중첩 for 반복문을 이용한 구구단 예제이다
*/

#include<stdio.h>

int main(void)
{

	int dan, num;

	for (dan = 2; dan < 10; dan++) {

		for (num = 1; num < 10; num++) {

			printf("%d x %d = %d", dan, num, dan * num);
		}
		printf("\n");
	}

	return 0;
}