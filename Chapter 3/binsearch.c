#include <stdio.h>

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        //printf("%d\n", low);
        //printf("%d\n", high);
        mid = (low + high) / 2;
        //printf("%d\n", mid);
        if (x < v[mid]) {
            high = mid - 1;
        }
        else if (x > v[mid]) {
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int idx;
    for (int i = 0; i < 9; i++) {
        idx = binsearch(i, arr, 9);
        printf("%d\n", idx);
    }
    
    return 0;
}