#include<stdio.h>

void quicksort(int a[], int low, int high) {
    if (low >= high)
        return;
    int i, j, pos;
    int pivot = a[low];
    i = low;
    j = high;
    while (i < j) {
        while (i < j && a[j] >= pivot) {
            j--;
        }
        a[i] = a[j];
        while (i < j && a[i] <= pivot) {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = pivot;
    pos = i;
    quicksort(a, low, pos - 1);
    quicksort(a, pos + 1, high);
}

int main() {
    int m;
    scanf("%d", &m);
    int a[65535];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, m - 1);
    int cha = a[1] - a[0];
    for (int i = 0; i < m - 1; i++) {
        int jian = a[i + 1] - a[i];
        if (jian != cha) {
            printf("no");
            return 0;
        }
    }
    printf("%d", cha);
    return 0;
}
