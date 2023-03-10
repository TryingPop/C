/*
날짜 : 2023. 3. 14
이름 : 배성훈
내용 : 배열
	교재 254 ~ 257p

	배열의 선언에 필요한 것 세 가지
		배열이름
		자료형
		길이정보

	과거 C 표준에서는 배열의 길이정보를 반드시 상수로 지정하도록 제한
	그래서 이러한 제약사항을 여전히 고수하고 있는 컴파일러도 다수 존재한다
	따라서 범용적인 컴파일을 위해서는 가급적 배열의 길이정보를 상수로 지정해야한다

	배열의 위치 정보를 명시하는 인덱스 값은 1이 아닌 0에서부터 시작한다

	아래는 배열에 관한 예시이다
*/

#include<stdio.h>

int main(void)
{

	int arr[5];	// int형 배열 arr은 길이가 5이다
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	// arr[5] = 60;	// 컴파일러는 배열접근에 있어서 유효성 검사를 진행하지 않기 때문에
					// 컴파일 에러를 일으키지 않는다
					// 할당되지 않은 메모리 공간을 침범하므로 주의해야한다!
					// 이는 상황마다 반응이 다르다

	for (i = 0; i < 5; i++) {

		sum += arr[i];
	}

	printf("배열요소에 저장된 값의 합: %d \n", sum);	// 150

	return 0;
}