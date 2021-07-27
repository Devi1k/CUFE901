#include "stdio.h"
#include "stdlib.h"

#define N 80
struct book {
    char name[10];
    int num;
} books[N];

int write() {
    FILE *fp2, *fp1;
    int i = 0;
    if ((fp1 = fopen("C:\\book\\bk_list.dat", "rb")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("C:\\book\\bk_re.dat", "wb")) == NULL) {
        fprintf(stderr, "Cannot open this file");
        exit(EXIT_FAILURE);
    }
    while (fread(&books[i], sizeof(struct book), 1, fp1)) {
        if (books[i].num < 30)
            fwrite(&books[i - 1], sizeof(struct book), 1, fp2);
        i++;
    }
    fclose(fp1);
    fclose(fp2);
    return i;
}

int main(void) {
    int len = write();
    for (int i = 0; i < len; ++i) {
        if (books[i].num < 30)
            printf("%s %d\n", books[i].name, books[i].num);
    }
    return 0;
}

