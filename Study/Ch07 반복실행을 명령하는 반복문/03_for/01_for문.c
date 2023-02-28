/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : for 반복문
	교재 162 ~ 166p

	for 반복문을 이루는 요소 3가지
		초기식	반복을 위한 변수의 선언 및 초기화에 사용
				본격적으로 시작하기에 핲서 딱 한번 실행된다

		조건식	반복의 조건을 검사하는 목적으로 선언됨
				매 반복의 시작에 아퍼 실행되며, 그 결과를 기반으로 반복유무를 결정!

		증감식	반복의 조건을 거짓으로 만드는 증가 및 감소연산
				매 반복실행 후 마지막에 연산이 이뤄진다

		필요 없는 요소는 채우지 않아도 된다
		조건식은 참으로 인식하고 이외의 요소는 건너뛰고 실행한다

	for 반복문의 형식은 아래와 같다
	for ( 초기식; 조건식; 증감식 ) {

		// 반복의 대상이 되는 문장들
	}

	반복의 횟수가 딱 정해진 경우라면 분명 for문이 최선이다

	아래는 for문의 예제이다
*/

#include <stdio.h>

int main(void)
{

	int i, num;			// 0부터 n까지의 합용 변수
	int total1 = 0;		// 합의 결과

	double input = 0.0;	// 실수의 평균 값용 변수
	double total2 = 0.0;// 실수의 평균 결과

	printf("0부터 num까지의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++) {

		total1 += i;
	}
	
	printf("0부터 %d까지 덧셈결과: %d \n", num, total1);

	i = 0;
	for ( ; input >= 0.0; ) {	// 조건식만 있다
								// while(input >= 0.0) 과 동일

		total2 += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
		i++;
	}

	printf("평균: %f \n", total2 / (i - 1));

	for (;;) {	// while (1) 과 동일
		
	}
	return 0;
}