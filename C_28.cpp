#include <stdio.h>
#include<string.h>
#include<ctype.h>
int strcmp_ic (const char *lhs, const char *rhs);
int main(){
	char str1[20];
	char str2[20];
	int ret = 0;
	printf("ù ��° ���ڿ� ?");
	gets(str1);
	
	printf("�� ��° ���ڿ� ?");
	gets(str2);
	
	ret = strcmp_ic(str1, str2);
	
	switch (ret) {
	case 0:
		printf("%s == %s", str1, str2);
		break;
	case 1:
		printf("%s<  %s", str1, str2);
		break;
	case -1:
		printf("%s > %s", str1, str2);
		break;
	}
}
int strcmp_ic(const char *lhs, const char *rhs) {
	while (*lhs) {
		int diff = tolower (*lhs) - tolower (*rhs);
		if (diff) {
			return diff;
		}
		lhs++;
		rhs++;
	}
	return 0;
}
