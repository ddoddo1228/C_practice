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
	printf("ã�� ��?:");
	scanf("%d", &x);
	int j=find_array(arr, size, x);
	printf("ã�� �׸��� ��� %d�� �Դϴ�.\n", j);
	printf("ã�� �׸��� �ε��� :");
	for (int i = 0; i < j; i++){
	printf("%d ", size[i]);
	}
}
