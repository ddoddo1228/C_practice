#include <stdio.h>
int main (void) {
	int sv, su;
	double con;
	
	printf("��� (g)?:");
	scanf("%d", &sv);
	
	printf("���� (g)?:"); 
	scanf("%d", &su);
	
	con = ((double)su / ((double) sv+(double)su)) * 100;
	
	printf("�� : %.2lf %%\n", con);
	
	return 0;
	
}
