/*
날짜 : 2023. 3. 5
이름 : 배성훈
내용 : 지역변수
	교재 222 ~ 226p

	중괄호 내에 선언되는 변수는 모두 지역변수다

	지역변수는 메모리에 존재하는 기간,
	변수에 접근할 수 있는 범위에서 전역변수와 다르다

	지역변수는 해당지역을 벗어나면 자동으로 소멸
	지역변수는 선언된 지역 내에서만 유효하기 때문에 선언된 지역이 다르면 이름이 같아도 문제가 되지 않는다

	지역변수는 스택이라는 메모리 영역에 할당된다
	지역변수는 접시에 쌓듯이 할당된다

	지역변수는 해당 선언문이 실행될 때 메모리 공간에 할당되었다가, 선언문이 존재하는 함수가 반환을 하면(종료를 하면)
	메모리 공간에서 소멸된다
*/

#include<stdio.h>

int SimpleFuncOne(void) {

	int num = 10;	// SimpleFuncOne의 num 유효
	num++;

	printf("SimpleFuncOne num: %d \n", num);
	return 0;		// SimpleFuncOne의 num이 유효한 마지막 문장
}

int SimpleFuncTwo(void) {

	int num1 = 20;	// num1 유효
	int num2 = 20;	// num2 유효

	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;		// num1, num2 유효한 마지막 문장
}

int main(void)
{

	int num = 17;	// main의 num 유효
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0;		// main의 num이 유효한 마지막 문장
}