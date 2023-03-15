/*
날짜 : 2023. 3. 15
이름 : 배성훈
내용 : 포인터를 배열의 이름으로 사용
	교재 293 ~ 294p

	포인터 변수를 배열의 이름처럼 사용하는 경우는 거의 없다
	마찬가지로 배열의 이름을 포인터 변수처럼 사용하는 경우도 거의 없다

	아래는 예제이다
*/

#include<stdio.h>

int main(void)
{

	int arr[3] = { 15, 25, 35 };
	int* ptr = &arr[0];

	printf("%d %d \n", ptr[0], arr[0]);	// 15 15
	printf("%d %d \n", ptr[1], arr[1]);	// 25 25
	printf("%d %d \n", ptr[2], arr[2]);	// 35 35
	printf("%d %d \n", *ptr, *arr);		// 15 15
}