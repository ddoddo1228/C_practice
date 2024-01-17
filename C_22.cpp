#include<stdio.h>
#define SIZE 5
void swap_array(int *arr, int *arr1);
void print_Array(int *arr2, int size);
int main (void) {
	int a[SIZE]={1,3,5,7,9};
	int b[SIZE]={0,2,4,6,8};
	
	printf("a 배열: ");
	print_Array(a,SIZE);
	printf("b 배열: ");
	print_Array(b,SIZE);
	
	swap_array(a,b);
	printf("<<swap_array호출 후 >>\n");
	printf("a배열: ");
	print_Array (a,SIZE);
	printf("b배열: ");
	print_Array(b,SIZE);
}
void swap_array(int *arr, int *arr1){
	int temp=0;
	for (int i=0; i<SIZE; i++){
		temp=arr[i];
		arr[i]=arr1[i];
		arr1[i]=temp;
	}
}
void print_Array(int *arr2, int size){
	for (int i=0; i<size; i++){
		printf("%3d", arr2[i]);
	}
	printf("\n");
}
