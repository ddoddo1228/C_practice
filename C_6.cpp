#include<stdio.h>

int main(void) {
    int x;
    float y;

    printf("USD?: ");
    scanf("%d", &x);

    printf("원/달러 환율?: ");
    scanf("%f", &y);

    printf("USD %d = KRW %f\n", x, x * y); 

    return 0;
}

