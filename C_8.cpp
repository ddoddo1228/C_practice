#include<stdio.h>

int main(void) {
    float m2, p;

    printf("����Ʈ�� ���� (��������)?: ");
    scanf("%f", &m2);

    p = 0.3025 * m2;

    printf("%.2f �������� = %.2f ��\n", m2, p);

    return 0;
}

