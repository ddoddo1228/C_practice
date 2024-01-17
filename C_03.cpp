#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;

    printf("가로의 길이?: ");
    scanf("%d", &x);

    printf("세로의 길이?: ");
    scanf("%d", &y);

    printf("사각형의 둘레: %d\n", 2 * (x + y));
    printf("사각형의 넓이: %d\n", x * y);

    return 0;
}

