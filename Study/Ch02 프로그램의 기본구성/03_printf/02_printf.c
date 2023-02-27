/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : printf 함수를 이용한 정수의 출력과 서식문자
	교재 45 ~ 46p

	서식문자는 삽입위치에 제한이 없기 때문에,
	다양하게 문자열을 조합해서 출력하는 것이 가능하다
*/

#include<stdio.h>

int main(void)
{

	printf("My age: %d \n", 20);			// My age: 20

	printf("%d is my point \n", 100);		// 100 is my point

	printf("Good \nmorning \neverybody\n");	// Good 
											// morning 
											// everybody

	return 0;
}