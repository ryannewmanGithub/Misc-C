#define MAXVAL 100
#include <stdio.h>

int sp = 0;
double stack[MAXVAL];

void push(double f) {
    if (sp < MAXVAL) {
        stack[sp++] = f;
    }
    else {
        printf("Error: Stack is full!\n");
    }
}


double pop(void) {
    if (sp > 0) {
        return stack[--sp];
    }
    else {
        printf("Error: Stack is empty.\n");
    }
}
