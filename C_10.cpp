#include <stdio.h>
	int main (void){
	int m, kwh;
	
	printf("�⺻����� ���ΰ���?: ");
	scanf("%d", &m);
	
	printf("�� ��뷮�� �󸸰���? :");
	scanf("%d", &kwh);
	
	printf("������ : %d �� \n", m+kwh*190);
	
	return 0;
}
