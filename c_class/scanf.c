#include <stdio.h>
int main(void)
{
	//scanf_s 사용 주의점
	//입력받을 데이터의 자료형에 대응하는 형식문자
	//입력받은 데이터를 저장할 메모리 공간(변수)
	// scanf -> scanf_s 

	//int num;
	//scanf_s("%d", &num);
	//printf("%d", num);

	////scanf_s를 사용해서 값3개를 입력받고 그것들의 합계를 구하는 코드

	//int x, y, z, total;
	//printf("숫자3개 입력:");
	//scanf_s("%d# %d# %d#", &x,&y,&z);
	//total = x + y + z;
	//printf("%d+%d+%d=%d", x,y,z,total);

	
	//float fnum;
	//printf("실수입력:");
	//scanf_s("%f", &fnum);
	//printf("입력된 값: %0.2f", fnum);
	
	//152.49861을 통해 152.499출력
	printf("%.3f", 152.49861);
	return 0;
}