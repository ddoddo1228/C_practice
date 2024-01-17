#include <stdio.h>
	int main (void){
	int m, kwh;
	
	printf("기본요금이 얼마인가요?: ");
	scanf("%d", &m);
	
	printf("월 사용량이 얼만가요? :");
	scanf("%d", &kwh);
	
	printf("전기요금 : %d 원 \n", m+kwh*190);
	
	return 0;
}
