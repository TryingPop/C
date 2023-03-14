/*
날짜 : 2023. 3. 14
이름 : 배성훈
내용 : 배열을 이용한 문자열
	교재 261 ~ 262p

	C에서 큰 따옴표를 이용해 문자열을 표현한다

	문자열의 끝에는 '\0' 이라는 특수문자가 자동으로 삽입되어 실제 문자열의 길이보다 1칸 더 길다
	'\0' 문자를 널 문자라고 한다
*/

#include <stdio.h>

int main(void)
{

	char str[] = "Good morning!";
	printf("배열 str의 크기: %d \n", sizeof(str));	// 14
	printf("널 문자 문자형 출력: %c", str[13]);	// 
	printf("널 문자 정수형 출력: %d", str[13]);	// 0

	str[12] = '?';	// 배열 str에 저장된 문자열 데이터는 변경 가능!
	printf("문자열 출력: %s \n", str);	// Good morning?
	return 0;
}