#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100]="";
	int i=0;
	
	printf("문자열?");
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
	printf("변환 후:");
	puts(str);
	return 0;
}
