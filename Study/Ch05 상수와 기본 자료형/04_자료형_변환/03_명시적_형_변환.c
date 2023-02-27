/*
날짜 : 2023. 2. 27
이름 : 배성훈
내용 : 명시적 형 변환
	교재 129 ~ 130p

	형 변환 연산자를 이용해 강제로 형 변환을 명령하는 것을 명시적 형 변환이라고 한다
	사용하는 방법은 다음과 같다
		(변환할 자료형) 변수명

	아래의 예제를 통해 보자
*/

#include <stdio.h>

int main(void)
{

	int num1 = 3, num2 = 4;
	double divResult;

	divResult = num1 / num2;
	printf("나눗셈 결과: %f \n", divResult);	// 0

	divResult = (double)num1 / num2;			// num1이 double형으로 변환된다
												// 그리고 num2가 int이므로 double보다 우선순위가 낮고
												// 이에 num2가 double로 자동적으로 변환하면서 double의 나눗셈 연산을 진행
												// 그리고 divResult에 저장된다

	printf("나눗셈 결과: %f \n", divResult);	// 0.750000
												// %f는 float을 불러오는 서식문자이므로 여기서도 float형으로 형 변환이 일어났다
	return 0;
}