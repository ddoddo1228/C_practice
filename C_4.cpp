#include <stdio.h>

int main(void) {
    float x, y, z;
    char op;

    printf("�� ���� ������ �Է��ϼ���: ");
    scanf("%f %f", &x, &y);

    printf("�� ���� ���� ����� ������(+, -, *, /)�� �Է��ϼ���: ");
    scanf(" %c", &op);

    if (op == '+')
        z = x + y;
    else if (op == '-')
        z = x - y;
    else if (op == '/')
        z = x / y;
    else if (op == '*')
        z = x * y;

    printf("x�� ������: %.f\n", x);
    printf("y�� ������: %.f\n", y);
    printf("%.f %c %.f = %.2f �Դϴ�.\n", x, op, y, z);

    return 0;
}
