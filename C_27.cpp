#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100]="";
	int i=0;
	
	printf("���ڿ�?");
	gets(str);
	
	for (i=0; i < (int) strlen(str); i++){
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
			else if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	printf("��ȯ ��:");
	puts(str);
	return 0;
}
