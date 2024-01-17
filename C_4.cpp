#include <stdio.h>

int main(void) {
    float x, y, z;
    char op;

    printf("두 개의 정수를 입력하세요: ");
    scanf("%f %f", &x, &y);

    printf("두 개의 수를 계산할 연산자(+, -, *, /)를 입력하세요: ");
    scanf(" %c", &op);

    if (op == '+')
        z = x + y;
    else if (op == '-')
        z = x - y;
    else if (op == '/')
        z = x / y;
    else if (op == '*')
        z = x * y;

    printf("x의 데이터: %.f\n", x);
    printf("y의 데이터: %.f\n", y);
    printf("%.f %c %.f = %.2f 입니다.\n", x, op, y, z);

    return 0;
}
