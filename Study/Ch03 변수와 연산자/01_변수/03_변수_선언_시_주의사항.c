/*
날짜 : 2023. 2. 26
이름 : 배성훈
내용 : 변수 선언 시 유의사항
	교재 53 ~ 55p

	중괄호 내에 변수를 선언할 경우,
	변수의 선언문은 중괄호의 앞부분에 위치해야 한다


	변수 이름을 지을 때 주의사항
		1. 변수의 이름은 알파벳, 숫자, 언더바(_)로 구성된다
		2. 둘째 C언어는 대소문자를 구분한다
		3. 변수의 이름은 숫자로 시작할 수 없고, 키워드도 변수의 이름으로 사용할 수 없다
		4. 이름 사이에 공백이 삽입될 수 없다

	이에따라 아래 변수의 선언문은 모두 유효하지 않다
		int 7ThVal;		// 변수의 이름이 숫자로 시작
		int phone#;		// 변수의 이름에 특수문자 # 이용
		int your name;	// 변수의 이름에 공백


	변수의 자료형
		변수는 크게 두 가지 부류로 나뉜다
			정수형 변수 : 정수의 저장을 목적으로 선언된 변수
			실수형 변수 : 소수점 이하의 값을 지니는 실수의 저장을 목적으로 선언된 변수

		정수냐, 실수냐에 따라서 값이 메모리 공간에 저장 및 참조되는 방식이 다르기 때문이다
		
		정수형 변수는 변수의 크기에 따라서 char, short, int long형 변수로 나뉘고,
		실수형 변수도 float, double형 변수로 나뉜다
*/

int main(void)
{

	int num1;
	int num2;

	num1 = 0;	// 변수선언 이후에 등장한 초기화 문장
	num2 = 0;	// 변수선언 이후에 등장한 초기화 문장

	int num3;	// 위쪽에 변수 선언이 아닌 다른 문장이 있어서
				// C언어 컴파일러에 따라 컴파일에러 일으킬 수 있다
				// 1999년도에 발표된 C언어 표준에서는 변수의 선언위치에 아무런 제한을 두지 않고 있다


	return 0;
}