#include<stdio.h>

int main(void) {
    char name[20];
    char home[20];
    char phone[20];

    printf("이름을 입력하세요: ");
    scanf("%s", name);

    printf("\n거주지를 입력하세요: ");
    scanf("%s", home);

    printf("\n연락처를 입력하세요: ");
    scanf("%s", phone);

    printf("이름은 %s이며, %s에 살고 있으며, 연락처는 %s입니다.", name, home, phone);

    return 0;
}

