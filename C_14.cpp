#include<stdio.h>
	int main(void){
	int k,basic,m;
	printf("����뷮?:");
	scanf("%d", &k);
	if (k <=300){
		basic=1000;
		m=k*100;
	}
	
	else {
	basic = 5000;
	m=300*100+(k-300)*200;
	}
	printf("���� ��� �հ�%d\n", basic + m);
	printf("-�⺻ ���: %d\n", basic);
	printf("-���·� ��� : %d", m);
	return 0;
}
