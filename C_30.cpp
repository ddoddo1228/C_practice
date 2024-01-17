#include <stdio.h>
struct product {
	char product_name[20];
	int price;
	int stock;
};

void print_product(struct product *ptr);
int main(void) {
	struct product product[5];
	int i = 0;
	for (i = 0; i < 5; i++)
	{
	printf("제품명?");
	scanf("%s", &product[i].product_name);
	if (product[i].product_name [0] == '.') {
		break;
	}

	printf("가격 재고?: ");
	scanf("%d %d", &product[i].price, &product[i].stock);
}


	for (int j = 0; j < i; j++){
		print_product(&product[j]);
	}
	void print_product(struct product *ptr) {
    printf("[%s %d원 재고:%d]\n", ptr->product_name, ptr->price, ptr->stock);

	
}
