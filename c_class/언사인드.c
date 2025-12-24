#include <stdio.h>
int main(void)
{
	printf("%zu", sizeof(int));
	printf("%zu", sizeof(char));
	printf("%zu", sizeof(short));
	printf("%zu\n", sizeof(float));
	
	
	float f = 3.14f;
	printf("%f\n", f);

	//이진수 두가지 기호를 사용하여 값을 표현하는 것 0과 1이 있음
	//10진수를 2진수로 계산하는법 숫자 5로 예시를 들면 5를 2로 나누면 몫은 2이고 나머지는 1인데 여기서 몫을 한번더 2로 나누면 몫은 1이고 나머지가 0이고 또 몫을 2로 나누면 안나눠지니까  0 해서 00000101
	//2진수 덧셈의 규칙 0+0=0 0+1=1 1+0=1 1+1=10
	//2의 보수란 모든 비트를 반전시킨 후 숫자에 +1
	unsigned char ch;
	unsigned short sh; //65000 원래는 -32000 ~ 32000
	unsigned int in;
	ch = 128;
	sh = 65000; 
	in = 41000000;
	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in); //%d는 int 값의 범위 내에서만 정상 작동한다 -21억 ~ 21억

	char num = 255;
	printf(" % d",num);
	
	//2진수를 10진수로 바꾸는법
	//0  1  1  0  1  0   0   1
	//128 64 32 16 8 4 2 1
	return 0;
}