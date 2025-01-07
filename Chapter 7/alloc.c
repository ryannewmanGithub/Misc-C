#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ip;
    int n = 3;
    ip = (int*) calloc(3, sizeof(int));
    *ip = 1;
    *(ip + 1) = 2;
    *(ip + 2) = 3;
    for (int i = 0; i < n; i++) {
        printf("%d\n", *(ip + i));
    }
    
    return 0;
}