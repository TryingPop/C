/*
날짜 : 2023. 3. 14
이름 : 배성훈
내용 : 널 문자
	교재 266 ~ 267p
	
	문자열은 이진 데이터로 저장되기 때문에 문자열의 시작과 끝이 표시되어 있지 않다면 문자열을 구분하는 것은 불가능하다
	그래서 널 문자를 이용해서 문자열의 끝을 표시하는 것이다
*/

#include<stdio.h>

int main(void)
{

	char str[50] = "I like C programming";
	printf("string: %s \n", str);	// I like C programming

	str[8] = '\0';	
	// str[8] = 0;	// 널 문자의 아스키 코드 값은 0이므로 위와 동일한 의미이다
	printf("string: %s \n", str);	// I like C

	str[6] = '\0';	
	printf("string: %s \n", str);	// I like

	str[1] = '\0';
	printf("string: %s \n", str);	// I
	return 0;
}