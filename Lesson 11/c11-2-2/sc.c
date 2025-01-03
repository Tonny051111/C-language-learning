#include <stdio.h>
#define N 5

struct person {
    char name[20];
    int age;
};

int main() {
    struct person persons[N] = {{"Li", 20}, {"Yang", 21}, {"Sun", 18}, {"Zhao", 23}, {"Lin", 17}};
    int i, kmin;
    kmin = 0;
    for (i = 1; i < N; i++) {
        if (persons[i].age < persons[kmin].age) {
            kmin = i;
        }
    }
    printf("年龄最小者为：%s ,其年龄为 %d\n", persons[kmin].name, persons[kmin].age);
    return 0;
}