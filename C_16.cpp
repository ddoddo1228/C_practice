#include<stdio.h>
int main(void){
	int N,i,a,j;
	printf("양의 정수?: ");
	scanf("%d", &N);
	
	for (1-2; 1<N; i++){
		for (a=2; a<i; a++){
			if (i%a == 0){
				break;
			}
		}
		if (i==a){
		printf("%d ",i);
		j++;
			if(j %10 == 0){
				printf("\n");
			}
		}
	}
}
