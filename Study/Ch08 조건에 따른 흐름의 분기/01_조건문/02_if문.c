/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : if 조건문
	교재 180 ~ 181p

	if문을 이용한 계산기 예제
*/

#include<stdio.h>

int main(void)
{

	int opt;
	double num1, num2;
	double result;

	printf("1. 덧셈, 2. 뺄셈, 3. 곱셈, 4. 나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	// opt에 어떠한 값을 입력하던 아래의 조건문 확인을 모두한다
	// 비효율적인 코드이다
	if (opt == 1) {

		result = num1 + num2;
	}

	if (opt == 2) {

		result = num1 - num2;
	}

	if (opt == 3) {

		result = num1 * num2;
	}

	if (opt == 4) {

		result = num1 / num2;
	}

	printf("결과: %f \n", result);
	return 0;
}