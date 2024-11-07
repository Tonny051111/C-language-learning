#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, correct_answer, user_answer;
    char op;

    srand(time(0));

    a = rand() % 100 + 1;
    b = rand() % 100 + 1;

    if (rand() % 2 == 0)
	 {
        op = '+';
        correct_answer = a + b;
    } 
	else 
	{
        op = '-';
        if (a < b)
		 {
            int temp = a;
            a = b;
            b = temp;
        }
        correct_answer = a - b; 
    }

    printf("请计算：%d %c %d = ", a, op, b);
    scanf("%d", &user_answer);

    if (user_answer == correct_answer)
	 {
        printf("恭喜你，答案正确！\n");
    } 
	else
	 {
        printf("很遗憾，答案错误。正确答案是 %d\n", correct_answer);
    }

    return 0;
}