#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char name[30]="";
	char * p = name;
	printf("���� �̸�?");
	gets(name);
	printf("�̴ϼ�:");
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

