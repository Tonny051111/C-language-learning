#include <stdio.h>
#include <stdlib.h>

struct student {
    int num;
    char name[20];
    float score;
};

int main() {
    struct student *stu;
    int i, imax = 0, n;
    printf("请输入人数: ");
    scanf("%d", &n);
    stu = (struct student *)malloc(n * sizeof(struct student)); //生成动态数组
    if (stu == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    printf("请输入学生信息:\n");
    for (i = 0; i < n; i++) {
        scanf("%d%s%f", &stu[i].num, stu[i].name, &stu[i].score);
    }
    imax = 0;
    for (i = 1; i < n; i++) {
        if (stu[i].score > stu[imax].score) {
            imax = i;
        }
    }
    printf("\n最高分:\n");
    printf("学号：%d 姓名：%s 成绩：%4.1f\n", stu[imax].num, stu[imax].name, stu[imax].score);
    free(stu); // 释放动态分配的内存
    return 0;
}