#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[20];
    int math;
    int english;
    int c_language;
    float average;
} Student;

void read_scores(Student students[], int *count);
void calculate_averages(Student students[], int count);
void sort_by_average(Student students[], int count);
void output_results(Student students[], int count);

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;

    read_scores(students, &count);
    calculate_averages(students, count);
    sort_by_average(students, count);
    output_results(students, count);

    return 0;
}

void read_scores(Student students[], int *count) {
    FILE *file = fopen("score.txt", "r");
    if (file == NULL) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    while (fscanf(file, "%d %s %d %d %d", &students[*count].id, students[*count].name, 
                  &students[*count].math, &students[*count].english, &students[*count].c_language) != EOF) {
        (*count)++;
    }

    fclose(file);
}

void calculate_averages(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        students[i].average = (students[i].math + students[i].english + students[i].c_language) / 3.0;
    }
}

void sort_by_average(Student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void output_results(Student students[], int count) {
    FILE *file = fopen("score_avg.txt", "w");
    if (file == NULL) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    printf("学号\t姓名\t高数\t英语\tC语言\t平均分\n");
    fprintf(file, "学号\t姓名\t高数\t英语\tC语言\t平均分\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%d\t%d\t%.2f\n", students[i].id, students[i].name, students[i].math, 
               students[i].english, students[i].c_language, students[i].average);
        fprintf(file, "%d\t%s\t%d\t%d\t%d\t%.2f\n", students[i].id, students[i].name, students[i].math, 
                students[i].english, students[i].c_language, students[i].average);
    }

    fclose(file);
}