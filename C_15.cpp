#include<stdio.h>
int main (void) {
int month=1;
int basic=0;
int money=0;
for(; ;) {
	printf("�� ��뷮(kWh)?:");
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

	printf("���� ��� �հ�: %d��\n", basic + money); 
	printf("	-�⺻ ���: %d��\n", basic);
	printf("	-���·����: %d��\n", money);
	}
}
