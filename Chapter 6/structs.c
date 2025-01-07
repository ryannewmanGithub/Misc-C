#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};

struct point makepoint(int x, int y) {
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

struct point* addpoint(struct point* p1, struct point* p2) {
    p1->x += p2->x;
    p1->y += p2->y;
    return p1;
}

int main() {
    struct point pt = {320, 200};
    struct point pt2 = makepoint(7, 7);


    struct point* rslt = addpoint(&pt, &pt2);
    printf("%d %d\n", rslt->x, rslt->y);
    return 0;
}