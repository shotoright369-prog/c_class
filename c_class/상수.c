#include <stdio.h>
#define PI = 3.14
int main(void)
{
	//상수:변하지 않는 값
	//리터럴상수: 그냥 그 값 그자체
	printf("%d\n", 10);

	//심볼릭상수 /상수는 선언과 초기화가 동시에 이루어짐 대문자로 자주 작성
	const int MYCONST = 85;
	const int YOURCONST;
	//매크로 상수/ 매크로 상수 뒤에는 ; 사용X

	const char* FRIND_HOME = "서울시 강남구 테헤란로 123";
	printf("약속 장소 :%s\n", FRIND_HOME);
	return 0;
}