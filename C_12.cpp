#include <stdio.h>
int main (void) {
	int sv, su;
	double con;
	
	printf("용매 (g)?:");
	scanf("%d", &sv);
	
	printf("용질 (g)?:"); 
	scanf("%d", &su);
	
	con = ((double)su / ((double) sv+(double)su)) * 100;
	
	printf("농도 : %.2lf %%\n", con);
	
	return 0;
	
}
