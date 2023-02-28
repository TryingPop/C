/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : goto 문
	교재 200 ~ 202p

	프로그램의 흐름을 원하는 위치로 이동시킬 때 사용하는 키워드이다
	이제는 goto의 사용에 부정적으로 결론이 났다

	goto문은 프로그램의 자연스러운 흐름을 방해하기 때문이다
	지양해야할 코드이지만 존재하는 문법이기에 사용 방법만 알아보자

	아래는 goto 구문의 예제이다
*/

#include<stdio.h>

int main(void)
{

	int num;
	printf("자연수 입력: ");
	scanf_s("%d", &num);

	if (num == 1) {

		goto ONE;
	}
	else if (num == 2) {

		goto TWO;
	}
	else {

		goto OTHER;
	}

// 레이블
ONE:
	printf("1을 입력하였습니다! \n");
	goto END;
TWO:
	printf("2를 입력하였습니다! \n");
	goto END;
OTHER:
	printf("3 혹은 다른 값을 입력하셨군요! \n");

END:
	return 0;
}