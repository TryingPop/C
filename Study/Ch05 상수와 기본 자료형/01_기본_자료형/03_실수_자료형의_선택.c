/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 실수 자료형의 선택
	교재 112 ~ 114p

	실수 자료형의 선택에 있어서 가장 중요한 것은 정밀도이다

	자료형에 따른 정밀도는 다음과 같다
		float		소수점 6자리	바이트 수 4
		double		소수점 15자리	바이트 수 8
		long double	소수점 18자리	바이트 수 12

	그래서 실수 자료형에서 보편적으로 선택하는 것이 double(이전에는 float)
	double이 보편적인 이유는 float보다 정밀하고 long double보다는 부담이 덜 되기 때문이다

	시스템에 따라서 long double이 12바이트 인 경우도 있다

	아래는 예제이다
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	double rad;
	double area;

	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);				// 서식형 문자 double을 입력 받을 때 %lf를 이용

	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area);
	return 0;
}