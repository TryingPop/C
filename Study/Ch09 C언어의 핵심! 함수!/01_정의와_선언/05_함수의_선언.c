/*
날짜 : 2023. 3. 1
이름 : 배성훈
내용 : 함수의 선언
	교재 216 ~ 218p

	main 함수의 호출 뒤에 정의한 함수를 컴파일러가 인식을 하지 못한다
	즉 함수는 main 함수가 호출되기 전에 미리 정의되어야 한다

	하지만 main 함수 호출 전에 함수의 선언을 통해 
	main 함수의 호출 뒤에 정의하는 것이 가능하다

	함수의 선언은
		정의에 사용된 형식만 적어주면 된다
		반환형 함수명(매개변수 자료형);

	아래는 선언의 예시이다
*/

#include <stdio.h>


int NumberCompare(int num1, int num2);
// int NumberCompare(int, int);

int main(void)
{

	printf("3과 4중에서 큰 수는 %d 이다", NumberCompare(3, 4));	// NumberCompare먼저 호출되고 
																// 이후에 반환값을 매개변수로하는 
																// printf가 호출된다
	printf("7과 2중에서 큰 수는 %d 이다", NumberCompare(7, 2));
	return 0;
}

// 동일한 경우 전달 못하는 불완전한 형태이다
int NumberCompare(int num1, int num2) {

	if (num1 > num2) {

		return num1;
	}
	else {

		return num2;
	}
}