#include<stdio.h>
int main (void){
	
	float n,m;
	
	printf("힘의 크기를 입력하세요.");
	scanf("%f", &n);
	
	printf("이동거리를 입력하세요.");
	scanf("%f", &m);
	
	printf("일의 양 : %.2f J\n", n*m);	
}
