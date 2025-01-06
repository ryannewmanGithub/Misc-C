#include <stdio.h>

int main() {
    void copy (char to[], char from[]) {
        int i = 0;
        while ((to[i] = from[i]) != '\0') {
            ++i;
        }
    }
    // Do not forget about null terminator when hardcoding the length of the array
    char str1[6] = "FIRST";
    char str2[16] = "aaaaaUnchanged?";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    printf("Calling copy()\n");
    copy(str2, str1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}