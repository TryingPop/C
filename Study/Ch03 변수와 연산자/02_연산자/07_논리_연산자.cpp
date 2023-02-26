/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 논리 연산자
	교재 65 ~ 67p

	다음과 같은 연산자들이 있다
		&&,	||,	!

		A && B : A와 B 모두 '참'이면 연산결과로 '참'을 반환(논리 AND)
		A || B : A와 B 둘 중 하나라도 '참'이면 연산결과로 '참'을 반환(논리 OR)
		!A : A가 '참'이면 '거짓', A가 '거짓'이면 '참'을 반환(논리 NOT)

	아래 예제에서 보이듯이 관계연산의 결과를 대상으로 논리연산을 진행하고 있다
	즉, 논리 연산자보다 관계 연산자가 먼저 진행이 된다
	이처럼 C언어는 연산자 우선순위라는 것을 정의하고 있다

	예제로 자세히 알아보자
*/

#include<stdio.h>

int main(void)
{

	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 > 12);
	result3 = (!num1);					// C언어는 0이 아닌 모든 값을
										// 참(true)으로 간주한다

	printf("result1: %d \n", result1);	// 1
	printf("result2: %d \n", result2);	// 1
	printf("result3: %d \n", result3);	// 0
}