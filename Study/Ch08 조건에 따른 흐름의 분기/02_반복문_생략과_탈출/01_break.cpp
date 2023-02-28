/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : break 키워드
	교재 190 ~ 191p

	break 키워드는 break 문을 가장 가까이에서 감싸고 있는 
	반복문 하나를 빠져 나오게 된다

	아래는 break 키워드에 하나의 예제이다
*/

#include<stdio.h>

int main(void)
{

	int sum = 0, num = 0;

	while (1) {

		sum += num;

		if (sum > 5000) {

			break;	// break 문 실행! 따라서 반복문 탈출
		}

		num++;
	}

	return 0;
}