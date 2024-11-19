#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_question(int *a, int *b, char *op) {
    *a = rand() % 100 + 1;
    *b = rand() % 100 + 1;
    int op_type = rand() % 4;
    switch (op_type) {
        case 0:
            *op = '+';
            break;
        case 1:
            *op = '-';
            if (*a < *b) {
                int temp = *a;
                *a = *b;
                *b = temp;
            }
            break;
        case 2:
            *op = '*';
            break;
        case 3:
            *op = '/';
            while (*a % *b != 0) {
                *a = rand() % 100 + 1;
                *b = rand() % 100 + 1;
            }
            break;
    }
}

int calculate(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
    return 0;
}

int main() {
    int a, b, user_result, correct_result, score, rounds;
    char op, choice;

    srand(time(0));

    do {
        score = 0;
        printf("Enter the number of questions per round: ");
        scanf("%d", &rounds);

        for (int i = 0; i < rounds; i++) {
            generate_question(&a, &b, &op);
            printf("Question %d: %d %c %d = ", i + 1, a, op, b);
            scanf("%d", &user_result);

            correct_result = calculate(a, b, op);
            if (user_result == correct_result) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Wrong! The correct answer is %d\n", correct_result);
            }
        }

        printf("You answered %d out of %d questions correctly.\n", score, rounds);
        printf("Do you want to start a new round? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}