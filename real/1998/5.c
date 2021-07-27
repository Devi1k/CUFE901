//
// Created by 倪泽溥 on 2021/4/27.
//
#define m 1000
typedef struct {
    int key;
    float info;
} element;
typedef element sqlist[m];

int search(sqlist r, int n, int k) {
    int i, j;
    if (n > 0) {
        j = (k - r[0].key) / (r[n - 1].key - r[0].key);
        j += 1;
        if (k < r[j].key) {
            while ((j > 0) && (k < r[j].key))
                j = 1 + (k - r[0].key) / (r[j - 1].key - r[0].key);
        } else {
            while ((j < n - 1) && (k > r[j].key))
                j = j + 1 + (k - r[j + 1].key) / (r[n - 1].key - r[j + 1].key);
        }
    } else
        return -1;
    if (k == j)
        return j;
    else
        return -1;
}
