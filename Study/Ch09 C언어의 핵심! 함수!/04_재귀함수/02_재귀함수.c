/*
날짜 : 2023. 3. 13
이름 : 배성훈
내용 : 재귀함수
	교재 241 ~ 243p

	재귀함수를 이용해 팩토리얼 함수를 만들어보자

	재귀함수를 쓰는 이유는 가독성이 좋기 때문(C#부분 참고!)
*/

#include<stdio.h>

int Factorial(int n) {

	if (n == 0) {

		return 1;
	}
	else {

		return n * Factorial(n - 1);
	}
}

int main(void) 
{

	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));
	return 0;
}