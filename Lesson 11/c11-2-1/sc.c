#include<stdio.h>
#include<stdlib.h>

struct date {
    int year;
    int month;
    int day;
};

int days(int year, int month, int day);
int check(int year, int month, int day);

int main() {
    struct date dt;
    printf("Please input Y, M, D\n");
    scanf("%d%d%d", &dt.year, &dt.month, &dt.day);
    
    if (check(dt.year, dt.month, dt.day) == 0) {
        printf("日期输入有误!\n");
        exit(0);
    }
    
    printf("\n%d %d %d is: %d days\n", dt.year, dt.month, dt.day, days(dt.year, dt.month, dt.day));
    return 0;
}

/* check 函数判别输入的日期是否合法，合法返回 1，不合法返回 0 */
int check(int year, int month, int day) {
    if (year < 0 || month < 1 || month > 12 || day < 1) return 0;
    
    if ((month % 2 == 1 && month <= 7) || (month % 2 == 0 && month >= 8)) {
        if (day > 31) return 0;
        else return 1;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) return 0;
        else return 1;
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { // 闰年
            if (day > 29) return 0;
            else return 1;
        } else {
            if (day > 28) return 0;
            else return 1;
        }
    }
    return 1; // 默认返回1，表示合法
}

int days(int year, int month, int day) {
    int i, day_sum = 0, leap;
    int day_tab[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        leap = 1;
    else
        leap = 0;
    
    if (leap) day_tab[1] = 29; // 闰年二月有29天
    
    for (i = 0; i < month - 1; i++)
        day_sum += day_tab[i];
    
    day_sum += day;
    
    return day_sum;
}