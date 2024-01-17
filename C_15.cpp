#include<stdio.h>
int main (void) {
int month=1;
int basic=0;
int money=0;
for(; ;) {
	printf("월 사용량(kWh)?:");
	scanf("%d", &month);
	if (month == 0){
		break;
	}

	if (month<=300){
	basic = 1000;
	money = month *100;
	}
	else{
	basic=5000;
	money=300*100+(month-300)*200;
	}

	printf("전기 요금 합계: %d원\n", basic + money); 
	printf("	-기본 요금: %d원\n", basic);
	printf("	-전력량요금: %d원\n", money);
	}
}
