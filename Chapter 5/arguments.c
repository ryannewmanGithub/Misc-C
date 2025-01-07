#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc + 1; i++) {
        printf("%s\n", *(argv++));
    }
    return 0;
}