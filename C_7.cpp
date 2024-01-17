#include<stdio.h>

int main(void) {
    int yd;
    double m;

    printf("±Ê¿Ã (yd)?: ");
    scanf("%d", &yd);

    m = yd * 0.9144;

    printf("%d yd = %f m\n", yd, m);

    return 0;
}

