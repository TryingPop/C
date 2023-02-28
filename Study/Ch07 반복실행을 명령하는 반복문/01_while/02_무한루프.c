/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : 무한루프
	교재 153 ~ 154p

	반복조건이 와야할 위치에 0이 아닌 값(참)이 올 경우,
	무한루프(무한반복)이라 불리는 빠져나가지 않는 반복문이 형성된다

	숫자 1은 참을 나타내는 대표값이다
	break 키워드를 통해서 빠져나갈 수 있으며,
	무한반복문은 필요에 의해서 만들어지는 경우가 있다

	아래는 무한루프에 대한 예제이다
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int dan = 0, num = 1;

	printf("몇 단? ");
	scanf("%d", dan);

	while (num < 10) {
		
		printf("%d x %d = %d", dan, num, dan * num);
		num++;
	}

	num = 1;

	while (1) {	// 무한 루프

		printf("%d x %d = %d", dan, num, dan * num);
		num++;
	}

	return 0;
}