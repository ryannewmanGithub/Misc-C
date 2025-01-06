#define square(x) x * x // Incorrect. Do not do this. It results in the wrong result.
#include <stdio.h>



int main() {
    int z = 2;
    int rslt = square(z + 1); 
    // Incorrect because it will be 2 + 1 * 2 + 1 = 2 + 2 + 1 = 5, which is not (2+1) * (2+1)
    printf("%d\n", rslt);
    return 0;
}