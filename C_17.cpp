#include<stdio.h>
int main(void) {
	
	int discount (int, int);
	
	int dis, price;
	
	printf("할인율(%%)?:");
	scanf("%d", &dis);
	
	while(1){
		printf("제품의 가격?");
		
		scanf("%d", &price);
		
			if (price == 0) {
			break;
		}
		printf("할인가 : %d원 \n", discount (price, dis));
	}
}
int discount(int price, int dis){
	return price * (100-dis)/100;
}
