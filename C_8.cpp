#include<stdio.h>

int main(void) {
    float m2, p;

    printf("아파트의 면적 (제곱미터)?: ");
    scanf("%f", &m2);

    p = 0.3025 * m2;

    printf("%.2f 제곱미터 = %.2f 평\n", m2, p);

    return 0;
}

