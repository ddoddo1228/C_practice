#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;

    printf("������ ����?: ");
    scanf("%d", &x);

    printf("������ ����?: ");
    scanf("%d", &y);

    printf("�簢���� �ѷ�: %d\n", 2 * (x + y));
    printf("�簢���� ����: %d\n", x * y);

    return 0;
}

