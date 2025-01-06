#include <stdio.h>

void qsort(int v[], int left, int right) {
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right) {
        return;
    }
    swap(v, left, (left + right) / 2); 
    last = left; 
    
    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left]) {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int main() {
    int arr[] = {3, 1, 2, 4, 3, 20, 2, 224, 2024, 2, 4, 2025, 25, 5, 220, 1, 6, 17, 70, 7};
    //printf("%lu\n", sizeof(arr));
    //return 0;
    qsort(arr, 0, 19);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}