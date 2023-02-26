/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 콤마 연산자
	교재 67 ~ 68p
	
	콤마 연산자는 둘 이상의 변수를 동시에 선언하거나, 
	둘 이상의 문장을 한 행에 삽입하는 경우에 사용되는 연산자 이다

	또한, 둘 이상의 인자를 함수로 전달할 때도 인자의 구분을 목적으로 사용된다

	즉, 콤마 연산자는 다른 연산자들과 달리, 연산의 결과가 아닌 구분을 목적으로
	주로 사용된다
*/

#include <stdio.h>

int main(void)
{

	int num1 = 1, num2 = 2;
	printf("Hello "), printf("world! \n");					// Hello world!
	num1++, num2++;
	printf("%d ", num1), printf("%d ", num2), printf("\n");	// 2, 3
	return 0;
}