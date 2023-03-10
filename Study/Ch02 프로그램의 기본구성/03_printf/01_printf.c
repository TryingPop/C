/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : printf 함수를 이용한 정수의 출력과 서식문자
	교재 42 ~ 44p

	printf 함수를 이용하면 문자열 이외의 데이터를 다양한 형태로 출력하는 것이 가능

	printf 는 첫 번째 인자로 문자열을 전달하면서, 이의 출력을 요청하는 문장이다
	%d와 같이 서식문자가 있다
	서식문자의 경우 형태에 맞는 다음 인자를 출력한다
	형태가 다른 경우 의도치 않은 결과를 도출한다
*/

#include<stdio.h>

int main(void)
{

	printf("Hello Everybody\n");	// Hello Everybody
									// \n은 줄간격을 의미하는 문자

	printf("%d\n", 1234);			// 1234
									// %d는 서식 문자이다
									// %d 는 정수인 다음 인자를 출력하게 한다

	printf("%d %d\n", 10, 20);		// 10 20
									// %d가 2개이므로 다음과 다다음 인자를 의미하는
									// 정수 10과 20을 출력한다

	printf("%d\n", 1.1f);			// -1610612736
									// 1.1f는 정수형이 아닌 실수형 자료형이므로 
									// 의도하지 않은 결과가 출력된다

	return 0;
}