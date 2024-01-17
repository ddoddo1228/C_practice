#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void j(int *arr, int num);
int main(){
	int arr[SIZE] = {0};
	srand(time(NULL));
	j(arr, 99);
	return 0;
}
void j (int*arr, int num) {
	int number;
	for (int i=0; i<SIZE; i++){
		number = (rand() % num) +1;
		printf("%3d", number);
		printf("number [%d]ÀÇ ÁÖ¼Ò=%d, data = %d\n", i, &arr[i], i);
	}
}
