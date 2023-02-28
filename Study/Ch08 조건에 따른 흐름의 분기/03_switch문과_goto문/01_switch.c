/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : switch 조건문
	교재 193 ~ 196p

	if - else if - else 구문과 유사한 측면이 있다
	경우에 따라서는 switch문이 이를 대체하기도하나 아주 제한적이다

	분기의 수가 많아지면 switch문이 더 간결해 보인다
	if - else if - else 조건문은 참과 거짓 연산결과를 이용해서 
	실행할 영역을 결정하는 방식이기에 switch문으로 대신하는데에는
	한계가 있다

	아래는 switch 문의 예제이다
*/

#include<stdio.h>

int main(void) 
{

	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf_s("%d", &num);

	switch (num) {	// num 은 switch문으로 전달되는 인자의 정보

	case 1:	// num의 값이 1인 경우
		printf("1은 ONE \n");
		break;	// switch문 탈출
				// 없다면 탈출 전까지 아래 구문을 실행한다
		
	case 2:	// num의 값이 2인경우
		printf("2는 TWO \n");
		break;

	case 3:
		printf("3은 THREE \n");
		break;

	case 4:
		printf("4는 FOUR \n");
		break;

	case 5:
		printf("5는 FIVE \n");
		break;

	default:
		printf("I don't know! \n");
		// 맨 마지막 경우에 한해서는 break 구문이 없어도 탈출한다
	}

	return 0;
}