#include<stdio.h>
	int main(void){
	int de, student;
	char score;
	
	printf("Ȧ��?: ");
	scanf("%d", &de);
	
	printf("��ü �ο���?: ");
	scanf("%d", &student);
	
	if (student * 10/100-de) {
	score = 'A';
	}
	else if (student *30/100 >=de){
	score = 'B';
	}
	else if (student * 60/100 >=de) {
	score = 'C';
	}
	else if (student *88/100 >=de){
	score = 'D';
	}
	else {
		score= 'F';
	}
	printf("����: %c", score);
	return 0;
}
