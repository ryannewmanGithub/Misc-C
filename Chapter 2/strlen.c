#include <stdio.h>

int strlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
            ++i;
    }
    return i;
}


int main() {
    char* str = "test";

    int len = strlen(str);

    printf("%d\n", len);
    return 0;
}