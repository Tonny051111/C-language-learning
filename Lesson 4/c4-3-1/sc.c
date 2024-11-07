#include <stdio.h>

int main() 
{
    float perprice,sumprice,price1,price2;
    int num;
    printf("请输入单价：");
    scanf("%f",&perprice);
    printf("请输入数量：");
    scanf("%d",&num);
    sumprice = num * perprice;
    printf("原总价：%.2f\n",sumprice);
    
    if(num >= 3)
    {
        price1 = sumprice * 0.7;
        printf("3件及以上7折\n");
    }
    else if(num == 1)
    {
        price1 = sumprice * 0.85;
        printf("2件8.5折\n");
    }
    else
        price1 = sumprice;
    
    if(price1 >= 900)
    {
        price2 = price1 - 90;
        printf("满900减90\n");
    }
    else if(600 <= price1 && price1 < 900)
    {
        price2 = price1 - 60;
        printf("满600减60\n");
    }
    else if(300 <= price1 && price1 < 600)
    {
        price2 = price1 - 30;
        printf("满300减30\n");
    }
    else
        price2 = price1;

    printf("优惠后总价：%.2f\n",price2);
    return 0;
}