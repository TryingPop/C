/*
날짜 : 2023. 3. 1
이름 : 배성훈
내용 : 함수의 유형
	교재 210 ~ 545p

	함수는 전달인자의 유무와 반환 값의 유무에 따라서 네 개의 형태로 나눈다
		유형 1 : 전달이자 있고, 반환 값 있다		전달인자(O),	반환 값 (O)
		유형 2 : 전달인자 있고, 반환 값 없다		전달인자(O),	반환 값 (X)
		유형 3 : 전달인자 없고, 반환 값 있다		전달인자(X),	반환 값 (O)
		유형 4 : 전달인자 없고, 반환 값 없다		전달인자(X),	반환 값 (X)
	
	아래는 유형 1 에 관한 예제이다
*/

#include <stdio.h>

// 함수의 선언과 정의
int Add(int num1, int num2) {	// 반환형	함수명	매개변수
								// int		Add		(int num1, int num2)

	return num1 + num2;		// 값의 반환

	// 위와 같은 구문이다
	// int result = num1 + num2;
	// return result
}

int main(void)
{

	int result;
	result = Add(4, 3);		// 실행 순서는 다음과 같다		
							// 함수 Add가 정의되어져 있는 곳으로 이동해 연산
							// 그리고 7을 반환
							// 이후 result에 7을 대입하는 연산이 이루어진다
	printf("덧셈결과1: %d \n", result);
	result = Add(5, 8);
	printf("덧셈결과2: %d \n", result);
	return 0;
}