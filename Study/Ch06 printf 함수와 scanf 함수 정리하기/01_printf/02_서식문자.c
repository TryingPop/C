/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 서식문자
	교재 136 ~ 139p

	정수형 서식문자
		서식문자	출력 대상			출력 형태
		%d			char, short, int	부호 있는 10진수 정수
		%ld			long				부호 있는 10진수 형태
		%lld		long long			부호 있는 10진수 형태
		%u			unsigned int		부호 없는 10진수 형태
		%o			unsigned int		부호 없는 8진수 정수
		%x, %X		unsigned int		부호 없는 16진수 정수

		8진수와 16진수의 경우 각각의 형태에 맞게 출력하려면 % 뒤에 #을 넣으면 된다

	printf의 f는 formatted(서식이 지정된)을 의미한다 
	따라서 printf라는 함수는 서식이 지정된 형태의 출력이라는 뜻이 담겨있다

	출력양식이 만들어진 상태에서 출력을 진행한다는 뜻이다
	
	아래는 정수형에 대한 예제이다
*/

#include <stdio.h>

int main(void)
{

	int myAge = 12;

	printf("제 나이는 10진수로 %d살\n", myAge);		// 12
	printf("8진수로 %o살\n", myAge);				// 14
	printf("16진수로 %#x살 입니다\n", myAge);		// c

	return 0;
}