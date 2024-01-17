#include <stdio.h>
int main() {
	int a;
	float b;
	char c;
	printf("a = %d, data = %d\n", &a, a);
	printf("b= %d, data = %.2f\n", &b, b);
	printf("c= %d, data = %c \n", &c, c);
	a = 10; b = 1.233; c = 'A';
	printf("aÀÇ ÁÖ¼Ò = %d, data = %d\n", &a, a);
	printf("bÀÇ ÁÖ¼Ò = %d, data = %.2f\n", &b, b);
	printf("cÀÇ ÁÖ¼Ò = %d, data = %c \n", &c, c);
	
	printf("%d %x\n", a, a);
	printf("%f %e\n", b, b);
	printf("%c\n", c);
}
