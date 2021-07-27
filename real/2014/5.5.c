//
// Created by 57054 on 2020/10/12.
//
#include <stdio.h>
#include <stdlib.h>

#define N 5
struct student {
    long int num;
    char name[10];
    int age;
    char sex;
    char addr[40];
};

void print(struct student *s, int m, int n);

struct student search(struct student *s, int num);

void write(struct student *s);

int main(void) {
    FILE *fp1;
    int k;
    struct student students[N];
    struct student temp;
    if ((fp1 = fopen("student.dat", "rb")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        fread(&students[i], sizeof(struct student), 1, fp1);
    }
    for (int i = 0; i < N - 1; ++i) {
        k = i;
        for (int j = i; j < N; ++j) {
            if (students[k].num > students[j].num)
                k = j;
        }
        if (k != i) {
            temp = students[k];
            students[k] = students[i];
            students[i] = temp;
        }
    }
    print(students, 4, 7);
    struct student get = search(students, 5);
    puts("Gets:");
    printf("%ld %s %d %c %s\n", get.num, get.name, get.age, get.sex, get.addr);
    write(students);
}


void print(struct student *s, int m, int n) {
    for (int i = m - 1; i < n - 1; ++i) {
        printf("%ld %s %d %c %s\n", s[i].num, s[i].name, s[i].age, s[i].sex, s[i].addr);
    }
}

struct student search(struct student *s, int num) {
    struct student *k = NULL;
    int low, high, middle;
    low = 0;
    high = N - 1;
    while (low <= high) {
        middle = (low + high) / 2;
        if (num < s[middle].num) {
            high = middle - 1;
        } else if (num > s[middle].num) {
            low = middle + 1;
        } else
            return s[middle];
    }
    return *k;
}

void write(struct student *s) {
    FILE *fp2;
    if ((fp2 = fopen("backup.dat", "rb")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; ++i) {
        fwrite(&s[i], sizeof(struct student), 1, fp2);
    }
}
