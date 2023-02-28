/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : do - while 반복문
	교재 157 ~ 161p

	while문과 do - while문의 차이는
	반복의 조건을 검사하는 시점에 있다
	이외는 같다

	while문은 앞부분에서 검사를 하기에 조건이 일치하지 않으면 실행되지 않을 수 있다
	do - while문은 반복조건을 뒷부분에서 검사한다
	그래서 do - while문은 최소한 1번은 실행하는 구조이다

	대다수의 경우 while문을 선택한다
	반복의 조건이 앞부분에 위치해서 코드를 작성하기에도,
	이해하기에도 용이하기 때문이다

	반복영역이 무조건 한 번 이상 실행되어야 하는 경우에 
	do - while문을 쓴다

	do - while문은 아래와 같은 형식으로 사용한다
		do {
	
			반복영역
		} while (조건영역);

	아래는 do - while문의 예제이다
*/

#include<stdio.h>

int main(void)
{

	int total = 0, num = 0;

	do {

		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);	// scanf와 같다
		total += num;
	} while (num != 0);

	printf("합계: %d \n", total);
	return 0;
}