#include <stdio.h>

int main(void) {
    float x, y;

    printf("질량을 입력하시오: ");
    scanf("%f", &x);

    printf("높이를 입력하시오: ");
    scanf("%f", &y);

    printf("위치에너지: %f\n", 9.8 * x * y);

    return 0;
}

