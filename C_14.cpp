#include<stdio.h>
	int main(void){
	int k,basic,m;
	printf("월사용량?:");
	scanf("%d", &k);
	if (k <=300){
		basic=1000;
		m=k*100;
	}
	
	else {
	basic = 5000;
	m=300*100+(k-300)*200;
	}
	printf("전기 요금 합계%d\n", basic + m);
	printf("-기본 요금: %d\n", basic);
	printf("-전력량 요금 : %d", m);
	return 0;
}
