#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int get_manhattan_distance(Point p1, Point p2) {

    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

int main() {
    Point p1, p2;

    scanf("%d %d", &p1.x, &p1.y);
    
    scanf("%d %d", &p2.x, &p2.y);

    int distance = get_manhattan_distance(p1, p2);

    printf("%d\n", distance);

    return 0;
}