/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : scanf
	교재 72 ~ 73p

	scanf는 공백을 기준으로 데이터를 구분하므로
	정수 사이에 스페이스바, 텝, 또는 엔터 키를 입력해야한다

	아래는 입력의 형태를 다양하게 지정하는 예제
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int result;
	int num1, num2, num3;
	
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d", num1, num2, num3, result);
	return 0;
}