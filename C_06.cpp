#include<stdio.h>

int main(void) {
    int x;
    float y;

    printf("USD?: ");
    scanf("%d", &x);

    printf("¿ø/´Þ·¯ È¯À²?: ");
    scanf("%f", &y);

    printf("USD %d = KRW %f\n", x, x * y); 

    return 0;
}

