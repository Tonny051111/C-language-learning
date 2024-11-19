#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float totalAmount;
    int numPackets;
    float *packets;
    float sum = 0.0;

    srand(time(NULL));

    printf("请输入红包总金额：");
    scanf("%f", &totalAmount);
    printf("请输入红包个数：");
    scanf("%d", &numPackets);

    packets = (float *)malloc(numPackets * sizeof(float));
    if (packets == NULL) {
        printf("内存分配失败\n");
        return 1;
    }

    for (int i = 0; i < numPackets; i++) {
        if (i == numPackets - 1) {
            packets[i] = totalAmount - sum;
        } else {
            packets[i] = ((float)rand() / RAND_MAX) * (totalAmount - sum) / (numPackets - i);
            sum += packets[i];
        }
    }

    FILE *fp = fopen("red_packet.txt", "w");
    if (fp == NULL) {
        printf("无法创建文件 red_packet.txt\n");
        free(packets);
        return 1;
    }

    fprintf(fp, "总金额：%.2f\n红包个数：%d\n", totalAmount, numPackets);
    printf("总金额：%.2f\n红包个数：%d\n", totalAmount, numPackets);

    for (int i = 0; i < numPackets; i++) {
        fprintf(fp, "红包 %d：%.2f\n", i + 1, packets[i]);
        printf("红包 %d：%.2f\n", i + 1, packets[i]);
    }

    fclose(fp);
    free(packets);

    printf("结果已保存到 red_packet.txt\n");
    return 0;
}
