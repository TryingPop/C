/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : switch 조건문
	교재 197 ~ 200p

	break를 생략한 형태의 switch 조건문의 예제이다
*/

#include <stdio.h>

int main(void)
{

	char sel;
	printf("M 오전, A 오후, E 저녁 \n");

	printf("입력: ");
	scanf_s("%c", &sel);

	switch (sel) {

	case 'M':
	case 'm':
		printf("Morning \n");
		break;

	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;

	case 'E':
	case 'e':
		printf("Evening \n");
		break;	// 사실 불필요한 break 문!
	}

	return 0;
}