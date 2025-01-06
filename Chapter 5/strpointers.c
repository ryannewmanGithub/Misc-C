#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) {
    if (strlen(t) > strlen(s)) {
        return 0;
    }
    int diff = strlen(s) - strlen(t);
    for (int i = 0; i < strlen(t); i++) {
        if (s[diff + i] != t[i]) {
            return 0;
        }
    }
    // s = "tacocat" t = "cat"
    return 1;
}

int main() {
    char* please = "strend";
    char* work = "nah";
    int result = strend(please, work);

    printf("%d \n", result);

    

    return 0;
}