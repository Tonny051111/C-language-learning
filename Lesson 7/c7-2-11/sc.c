#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int counts[6] = {0};
    int i, roll;
    srand(time(0));
    for (i = 0; i < 6000; i++) {
        roll = rand() % 6 + 1;
        counts[roll - 1]++;
    }
    printf("Face\tCount\tProbability\n");
    for (i = 0; i < 6; i++) {
        printf("%d\t%d\t%.2f%%\n", i + 1, counts[i], (counts[i] / 6000.0) * 100);
    }
    return 0;
}