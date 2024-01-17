#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char name[30]="";
	char * p = name;
	printf("영문 이름?");
	gets(name);
	printf("이니셜:");
	while(1){
		printf("%c", toupper(p[0]));
		p=strchr(p, ' ');
		if(p==NULL) {
			break;
		}
		p++;
	}
	return 0;
}

