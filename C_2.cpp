#include<stdio.h>

int main(void) {
    char name[20];
    char home[20];
    char phone[20];

    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", name);

    printf("\n�������� �Է��ϼ���: ");
    scanf("%s", home);

    printf("\n����ó�� �Է��ϼ���: ");
    scanf("%s", phone);

    printf("�̸��� %s�̸�, %s�� ��� ������, ����ó�� %s�Դϴ�.", name, home, phone);

    return 0;
}

