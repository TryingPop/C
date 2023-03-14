/*
날짜 : 2023. 3. 14
이름 : 배성훈
내용 : scanf를 이용한 문자열
	교재 263 ~ 265p, 267 ~ 268p

	앞에서 scanf를 이용할 때 변수 앞에 &를 붙였으나
	배열의 경우 사용하지 않는다

	scanf역시도 문자열 끝에 널 문자 \0가 삽입된다
	실제로 C언어에서 표현하는 모든 문자열의 끝에는 널 문자가 자동으로 삽입된다

	scanf 함수가 데이터를 구분 짓는 기준이 공백이다
	
	그래서 He is my friend를 삽입한다면
		'He', 'is', 'my', 'friend'
	4개의 문자열이 입력된 것으로 간주한다
	그래서 scanf 함수는 문장을 입력 받기에는 적절치 않다

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str);	// 문자열을 입력 받아서 배열 str에 저장
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0') {

		printf("%c", str[idx]);
		idx++;
	}

	printf("\n");
	return 0;
}