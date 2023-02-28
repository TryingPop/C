/*
날짜 : 2023. 2. 28
이름 : 배성훈
내용 : continue 키워드
	교재 191 ~ 192p

	반복문 안에서 continue 키워드를 실행하면
	위치에 상관없이 조건 검사 위치로 이동한다

	즉, continue 이후 코드들은 실행이 안된다

	아래는 continue 키워드의 예제이다
*/

#include <stdio.h>

int main(void)
{

	int num;
	printf("start! ");

	for (int num = 1; num < 20; num++) {

		// 2와 3의 배수가 아닌 수를 출력
		if (num % 2 == 0 || num % 3 == 0) {

			continue;
		}

		printf("%d ", num);
	}
	printf("end! \n");
	return 0;
}