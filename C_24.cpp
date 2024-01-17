#include <stdio.h>
#define SIZE 10
void j(int *arr, int size, int com);
int main(){
	int num=0;
	int com=0;
	
	printf("첫번째 항?");
	scanf("%d", &num);
	printf("공차?:");
	scanf("%d", &com);
	int arr[SIZE]={num};
	j(arr, SIZE, com);
}
void j(int*arr, int size, int com){
	printf("등차수열: %d", arr[0]);
	for (int i=1; i<size; i++){
		arr[i]= arr[i-1]+com;
		printf("%d ", arr[i]);
	}
}
