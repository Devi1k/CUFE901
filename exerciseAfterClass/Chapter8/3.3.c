//
// Created by 57054 on 2020/11/2.
//
#include "stdio.h"

void add(struct teacher teacher[]);

struct teacher {
    int num;
    char name[10];
    int gender;
    int year;
    char status[5];
    float salary;
};

int main(void) {
    struct teacher teacher[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d%s%d%d%s%f", &teacher[i].num, teacher[i].name, &teacher[i].gender, &teacher[i].year, teacher[i].status,
              &teacher[i].salary);
    }
    add(teacher);

}

void add(struct teacher teacher[]) {
    for (int i = 0; i < 10; ++i) {
        if (teacher[i].year > 10)
            teacher[i].salary *= 1.1;
        else
            teacher[i].salary += 100;
    }
}

void sort(struct teacher teacher[]) {
    int k;
    struct teacher temp;
    for (int i = 0; i < 9; ++i) {
        k = i;
        for (int j = i + 1; j < 10; ++j) {
            if (teacher[k].salary < teacher[j].salary)
                k = j;
        }
        if (k != i) {
            temp = teacher[k];
            teacher[k] = teacher[i];
            teacher[i] = temp;
        }
    }
}
