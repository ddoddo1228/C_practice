#include<stdio.h>
int main(void) {
	
	int discount (int, int);
	
	int dis, price;
	
	printf("������(%%)?:");
	scanf("%d", &dis);
	
	while(1){
		printf("��ǰ�� ����?");
		
		scanf("%d", &price);
		
			if (price == 0) {
			break;
		}
		printf("���ΰ� : %d�� \n", discount (price, dis));
	}
}
int discount(int price, int dis){
	return price * (100-dis)/100;
}
