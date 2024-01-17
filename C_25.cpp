#include <stdio.h>
int find_array(int *arr, int *size, int x){
	int z = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == x){
		size[z] =i;
		z++;
		}
	}
	return z;
}

int main(void) {
	int arr[10]= { 12,45,62,12,45,83,23,12,72,45 };
	int size[10];
	int x=0;
	for (int a = 0; a < 10; a++) {
		printf("%d ", arr[a]);
	}
	printf("\n");
	printf("찾을 값?:");
	scanf("%d", &x);
	int j=find_array(arr, size, x);
	printf("찾은 항목은 모두 %d개 입니다.\n", j);
	printf("찾은 항목의 인덱스 :");
	for (int i = 0; i < j; i++){
	printf("%d ", size[i]);
	}
}
