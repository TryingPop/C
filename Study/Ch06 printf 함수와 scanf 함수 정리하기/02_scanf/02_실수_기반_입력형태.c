/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 실수 기반 입력형태
	교재 145 ~ 146p

	scanf 함수의 서식문자
		%f		float 형
		%lf		double 형
		%Lf		long double 형

		lf, Lf 대소문자 구분 주의하기!

	printf 에서는 double과 float이 서식문자 %f를 함께 이용하나
	scanf에서는 double은 %lf를 이용한다

	문자열은 %s를 이용한다
	추후 배열에서 알아본다

	아래는 실수 기반 입력형태 예제이다
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	float num1;
	double num2;
	long double num3;

	printf("실수 입력1(e 표기법으로): ");
	scanf("%f", &num1);
	printf("입력된 실수 %f \n", num1);

	printf("실수 입력2(e 표기법으로): ");
	scanf("%lf", &num2);
	printf("입력된 실수 %f \n", num2);

	printf("실수 입력3(e 표기법으로): ");
	scanf("%Lf", &num3);
	printf("입력된 실수 %f \n", num3);
	return 0;
}