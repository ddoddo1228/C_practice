#include<stdio.h>
#define SIZE 10
void get_min_max(int *p, int *max, int *min);
int main(void){
	int arr[SIZE]={23, 45, 62, 12, 99, 83, 23, 58, 72, 37};
	int i=0;
	int *p =arr;
	int max= 0;
	int min=arr[0];
	
	printf("배열:");
	for (int i=0; i<SIZE; i++){
		printf("%d", p[i]);
	}
	printf("\n");

	get_min_max(p, &max, &min);
	printf("최대값: %d\n 최솟값: %d", max, min);
	
	return 0;

}
void get_min_max(int *p, int *max, int *min){
	for(int i=0; i<SIZE; i++){
		if(*max<p[i]){
			*max=p[i];
		}
		if(*min>p[i]){
			*min=p[i];
		}
	}
}

