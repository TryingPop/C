/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : if - else if - else 문
	교재 184 ~ 187p

	둘 이상의 조건식을 이용해 세 개 이상의 블록 중 하나의 블록을 선택해서 실행하는 구조이다
	else if 절은 중간에 얼마든지 추가 가능하다

	사용하는 방법은
	if (조건식 1) {

		// 조건식 1이 참일 때 실행하는 코드
	}
	else if (조건식 2) {

		// 조건식 1이 거짓이고 조건식 2가 참일 때 실행하는 코드
	}
	else {

		// 조건식들이 모두 거짓일 때 실행하는 코드
	}

	마지막에 else를 생략해도 된다

	if - else if - else 문은 다음과 같다
	if (조건식 1) {

		// 조건식 1 이 참일 때 실행하는 코드
	}
	else {

		// 아래는 조건식 1이 거짓일 때 실행하는 코드
		if (조건식 2) {

			// 조건식 2가 참일 때 실행하는 코드
		}
		else {

			// 조건식 2가 거짓일 때 실행하는 코드	
		}
	}

	와 같은 논리라 보면 된다

	아래는 if - else if - else 조건문을 이용한 계산기 예제이다
*/

#include<stdio.h>

int main(void)
{

	int opt;
	double num1, num2;
	double result;

	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1) {

		result = num1 + num2;
	}
	else if (opt == 2) {

		result = num1 - num2;
	}
	else if (opt == 3) {

		result = num1 * num2;
	}
	else {

		result = num1 / num2;
	}

	printf("결과: %f \n", result);
	return 0;
}