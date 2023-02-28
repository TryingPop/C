/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : 삼 항 연산자
	교재 187 ~ 189p

	삼 항 연산자는 다음과 같은 형식으로 사용한다
		(조건식) ? 참 일경우 반환할 값 : 거짓일 경우 반환할 값

	아래는 삼 항 연산자의 예제이다
*/

#include <stdio.h>

int main(void)
{

	int num, abs;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절대값: %d \n", abs);
	return 0;
}