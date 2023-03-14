/*
날짜 : 2023. 3. 14
이름 : 배성훈
내용 : 배열의 선언과 동시에 초기화, sizeof
	교재 257 ~ 260p

	중괄호를 이용해 배열의 선언과 초기화를 동시에 한다
	중괄호 부분을 초기화 리스트라고 한다

	sizeof에 배열을 매개변수로 하는 경우, 바이트 단위의 배열 크기가 반환된다

	sizeof 연산자와 선언과 동시에 초기화를 하는 예제이다
*/

#include <stdio.h>

int main(void)
{

	// 배열을 초기화하는 3가지 방법
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };	// 초기화 선언을 하는 경우에만 사용가능하다
											// 컴파일러에 의해서 자동으로 길이에 7이 삽입된다
	int arr3[5] = { 1, 2 };	// 나머지 요소는 0으로 채워짐
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1));	// 20
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));	// 28
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));	// 20
		
	ar1Len = sizeof(arr1) / sizeof(int);	// 배열 arr1의 길이 계산
	ar2Len = sizeof(arr2) / sizeof(int);	// 배열 arr2의 길이 계산
	ar3Len = sizeof(arr3) / sizeof(int);	// 배열 arr3의 길이 계산

	for (i = 0; i < ar1Len; i++) {

		printf("%d ", arr1[i]);
	}
	printf("\n");	// 1 2 3 4 5 

	for (i = 0; i < ar2Len; i++) {

		printf("%d ", arr2[i]);
	}
	printf("\n");	// 1 2 3 4 5 6 7

	for (i = 0; i < ar3Len; i++) {

		printf("%d ", arr3[i]);	
	}
	printf("\n");	// 1 2 0 0 0

	return 0;
}