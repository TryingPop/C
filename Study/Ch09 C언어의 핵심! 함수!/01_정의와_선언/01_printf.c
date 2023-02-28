/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : printf 함수
	교재 208 ~ 210p

	해결해야할 문제의 규모가 크거나 그 형태가 복잡한 경우,
	작은 문제부터 하나씩 해결해 나가는 것이 효과를 발휘하기 때문이다

	C언어 함수는 전달인자가 없거나 반환 값이 없는 경우도 있다

	다음은 printf 함수의 반환에 대한 예제이다
*/

#include<stdio.h>

int main(void)
{

	int num1, num2;
	num1 = printf("12345\n");	// 12345
	num2 = printf("I love my home\n");	// I love my home
	printf("%d %d \n", num1, num2);	// 6, 15
									// 문자열의 길이를 반환한다
									// 문자열 끝을 알리는 \0의 값이 포함된 결과!
	return 0;
}