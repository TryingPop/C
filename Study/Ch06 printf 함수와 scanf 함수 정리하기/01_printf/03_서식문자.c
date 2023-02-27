/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 서식문자
	교재 139 ~ 142p

	실수형 서식문자
		서식문자	출력 대상		출력 형태
		%f			float, double	10진수 방식의 부동소수점 실수
		%Lf			long double		10진수 방식의 부동소수점 실수
		%e, %E		float, double	e 또는 E 방식의 부동소수점 실수
		%g, %G		float double	값에 따라 %f와 %e 사이에서 선택


	g의 경우 자리수가 늘어나면 e의 표기법으로 출력을 한다고 보면 된다

	아래는 실수형 서식문자에 대한 예제이다
*/

#include <stdio.h>

int main(void)
{

	double d1 = 1.23e-3;	// 0.00123
	double d2 = 1.23e-4;	// 0.000123
	double d3 = 1.23e-5;	// 0.0000123
	double d4 = 1.23e-6;	// 0.00000123;

	printf("f 출력\n");
	printf("%f \n", d1);	// 0.001230
	printf("%f \n", d2);	// 0.000123
	printf("%f \n", d3);	// 0.000012
	printf("%f \n", d4);	// 0.000001


	printf("\ne 출력\n");
	printf("%e \n", d1);	// 1.230000e-03
	printf("%e \n", d2);	// 1.230000e-04
	printf("%e \n", d3);	// 1.230000e-05
	printf("%e \n", d4);	// 1.230000e-06

	printf("\ng 출력\n");		
	printf("%g \n", d1);	// 0.00123
	printf("%g \n", d2);	// 0.000123
	printf("%g \n", d3);	// 1.23e-5
	printf("%g \n", d4);	// 1.23e-6
}