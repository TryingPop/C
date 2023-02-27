/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : unsigned 키워드
	교재 114 ~ 115p

	음이 아닌 수를 표현하기 위해 사용하는 키워드이다
	자료형 앞에 추가해 사용한다
		unsigned int num;

	일반적으로 signed 기호가 생략되어 사용된다 
		char의 경우 signed char가 생략되어 있다고 보면 된다

	unsigned 키워드를 사용할 경우 자료형의 크기는 변함없이 기존보다 2배 가까이 큰 값을 다룰 수 있다
	char형의 경우 -128 ~ 127 인데, unsigned char 의 경우 0 ~ 255까지 사용이 가능하다
*/

#include <stdio.h>

int main(void)
{

	char s1 = 255;
	unsigned u1 = 255;

	printf("s1의 크기: %d \n", sizeof(s1));
	printf("u1의 크기: %d \n", sizeof(u1));


	printf("s1: %d \n", s1);		// -1
									// 오버플로우 발생
									// 지정된 범위보다 큰 값을 담고 있어
									// 입력값과 다른 값을 보여준다

	printf("u1: %d \n", u1);		// 255

	return 0;
}