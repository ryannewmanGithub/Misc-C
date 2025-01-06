#include <stdio.h>
#include "math_operations.h"

// gcc main.c math_operations.c -o main
// Can also do gcc -o main main.c math_operations.c

int main() {
    int result1 = add(5, 3);
    int result2 = subtract(10, 4);

    printf("Addition: %d\n", result1);
    printf("Subtraction: %d\n", result2);

    return 0;
}
