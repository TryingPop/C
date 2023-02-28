/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : if - else 조건문
	교재 183 ~ 184p

	else는 독립적으로 사용되는 키워드가 아니라
	키워드 if와 더불어 하나의 문장을 구성하는 형태로 사용된다

	사용 방법은 아래와 같다
	if (조건식) {

		// 조건식이 참일 때 실행하는 코드
	}
	else {
		// 조건식들이 거짓인 경우 실행하는 코드
	}

	아래는 if - else 문의 예제이다
*/

#include <stdio.h>

int main(void)
{

	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0) {

		printf("입력 값은 0보다 작다 \n");
	}
	else {

		printf("입력 값은 0보다 작지 않다 \n");
	}

	return 0;
}