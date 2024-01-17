#include<stdio.h>
void calculation(char,int);
int result;
int main(){
	char a;
	int b;
	printf("0 ");
	while(1)
	{
		scanf(" %c %d", &a, &b); 
		if((a=='0') && (b==0)){
			break;
		}
		else{
		calculation(a,b);
		}
	}
}

void calculation(char a,int b){
	if (a=='+'){
	result = result +b;
	}
	if (a=='-'){
	result = result -b;
	}
	if (a=='*'){
	result = result *b;
	}
	if (a=='/'){
	result = result /b;
	}
	printf("= %d", result);
}
