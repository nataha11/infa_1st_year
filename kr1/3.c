#include <stdio.h>

struct Point {
    float x;
    float y;
};

int in_region(struct Point p) {
    if (p.y < 2 && p.y < p.x * p.x - 3) {
    	return 1;
    } 
    return 0;
}

int main() {
    struct Point s;

    return 0;
}
