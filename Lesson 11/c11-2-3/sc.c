#include <stdio.h>
#include <string.h>

struct person {
    char name[20]; /*姓名*/
    int count; /*得票数*/
};

int main() {
    struct person stu[3] = {{"zhang", 0}, {"wang", 0}, {"li", 0}};
    int i, j;
    char leader_name[20];

    for (i = 1; i <= 10; i++) { /*设有 10 个人参加投票*/
        printf("请输入得票人姓名: ");
        scanf("%s", leader_name); /*输入得票人姓名*/
        for (j = 0; j < 3; j++) {
            if (strcmp(leader_name, stu[j].name) == 0) {
                stu[j].count++; /*增加得票数*/
                break;
            }
        }
    }

    printf("\n最后得票统计结果：\n");
    for (i = 0; i < 3; i++) {
        printf("%5s: %d\n", stu[i].name, stu[i].count); /*输出候选人的名字和得票数*/
    }

    return 0;
}