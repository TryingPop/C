/*
날짜 : 2023. 3. 5
이름 : 배성훈
내용 : 지역변수
	교재 226 ~ 228p

	지역변수는 반복문이나 조건문에도 선언이 가능하다

	for문은 중괄호의 진입과 탈출을 반복하면서 이루어진다
*/

#include<stdio.h>

int main(void)
{

	int cnt;

	for (cnt = 0; cnt < 3; cnt++) {

		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num);
	}

	if (cnt == 3) {

		int num = 7;
		num++;
		printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
	}
}