/*
날짜 : 2023. 3. 13
이름 : 배성훈
내용 : 전역변수
	교재 230 ~ 231p

	전역변수의 특징 3가지
		프로그램의 시작과 동시에 메모리 공간에 할당되어 종료 시까지 존재한다
		별도의 값으로 초기화하지 않으면 0으로 초기화된다
		프로그램 전체 영역에서 어디서든 접근이 가능하다
*/

#include <stdio.h>

void Add(int val);
int num;	// 전역변수는 기본 0으로 초기화 됨

int main(void) 
{

	printf("num: %d \n", num);	// 0
	Add(3);

	printf("num: %d \n", num);	// 3
	num++;	// 값 1 증가

	printf("num: %d \n", num);	// 4
	return 0;
}

void Add(int val) {

	num += val;	// 전역변수 num의 값 val만큼 증가
}