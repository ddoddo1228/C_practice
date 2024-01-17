#include <stdio.h>

struct date {
    int year, month, day;
};

void holiday(struct date *ptr, struct date *arr);

int main(void) {
    struct date date1;
    struct date arr[] = {{0, 1, 1}, {0, 3, 1}, {0, 5, 5}, {0, 8, 15}};

    while (1) {
        printf("날짜 (연월일)? ");
        scanf("%d %d %d", &date1.year, &date1.month, &date1.day);

        if ((date1.year == 0) && (date1.month == 0) && (date1.day == 0)) {
            break;
        }
        holiday(&date1, arr);
    }

    return 0;
}

void holiday(struct date *ptr, struct date *arr) {
    int i;
    for (i = 0; i < 4; i++) {
        if ((arr + i)->month == ptr->month && (arr + i)->day == ptr->day) {
            i = -1;
            break;
        }
    }
    if (i == -1) {
        printf("%d/%d/%d은 공휴일입니다.\n", ptr->year, ptr->month, ptr->day);
    } else {
        printf("%d/%d/%d은 공휴일이 아닙니다.\n", ptr->year, ptr->month, ptr->day);
    }
}

