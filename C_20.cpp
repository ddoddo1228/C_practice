#include<stdio.h>
#define SIZE 5
int main (void){
	double arr[SIZE]={0};
	double *p =arr;
	double sum=0;
	int i;
	printf("�Ǽ� 5���� �Է��ϼ��� :");
		for (i=0; i<SIZE; i++) {
			scanf("%lf", &arr[i]);
		}
		for (i=0; i < SIZE; i++){
			sum+=p[i];
		}
		printf("%lf\n", sum);
			return 0;
		}
