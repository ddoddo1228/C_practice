#include <stdio.h>
	int main (void){
	double F,C;
	
	printf("È­¾¾¿Âµµ?: ");
	scanf("%lf, &F"2);
	
	C = (F-32) * 5.0/ 9.0;
	
	printf("%.0lf F = %.2lf C", F, C);
	
	return 0;
}
