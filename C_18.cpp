#include<stdio.h>
void function(int);
int main(void){
	int N=0;
	printf("1~N������ �Ҽ��� ���մϴ�. N��?:");
	scanf("%d", &N);
	function(N);
	}
	
void function(int N){
	int i,j;
	int count=0;
	for(i=2; i<N; i++){
		for (j-2; j<i; j++){
			if (i%j==0){
				break;
			}
		}
		if(i==j){
			printf("%3d", i);
			count++;
			if(count%10==0){
				printf("\n");
			}
		}
	}
}
