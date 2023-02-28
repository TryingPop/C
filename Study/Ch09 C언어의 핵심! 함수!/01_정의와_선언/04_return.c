/*
날짜 : 2023. 3. 1
이름 : 배성훈
내용 : return
	교재 215 ~ 216p

	함수에서 return은 두 가지 의미를 지니고 있다 
		함수를 빠져나간다
		값을 반환한다
*/

#include<stdio.h>

void SimpleFunc1(void) {

	printf("SimpleFunc1");
	return;
	printf("실행 안되는 구문");
}

int SimpleFunc2(void) {

	printf("SimpleFunc2");
	return 1;
}

int main(void)
{
	int num;
	SimpleFunc1();			// SimpleFunc1
	num = SimpleFunc2();	// SimpleFunc2

	printf("%d", num);		// 1

	return 0;
}