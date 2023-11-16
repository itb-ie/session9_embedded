#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct point{
    int x, y;
} t_point;

void print_point(t_point p) {
    printf("p(%d, %d)\n", p.x, p.y);
}

t_point create_point(int x, int y) {
    t_point temp = {x, y};
//    temp.x = x;
//    temp.y = y;
    return temp;
}

t_point add_points(t_point p1, t_point p2) {
//    t_point temp = {p1.x + p2.x, p1.y + p2.y};
//    return temp;
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

double distance(t_point p1) {
    return sqrt(p1.x*p1.x + p1.y*p1.y);
}

bool points_eq(t_point p1, t_point p2) {
    return distance(p1) == distance(p2);
}


bool points_gt(t_point p1, t_point p2) {
    return distance(p1) > distance(p2);
}

int main() {
    t_point p1, p3;
//    t_point p2 = {10, 20};
    t_point p2 = create_point(10, 20);
    p1.x = 10;
    p1.y = 20;
//    printf("p1=(%d, %d)\n", p1.x, p1.y);
    print_point(p1);
    print_point(p2);
    p3 = add_points(p1, p2);
    print_point(p3);
    print_point(p1);
    p1 = create_point(10, 5);
    p2 = create_point(5, 10);
    printf("p1==p2 is %s\n", points_eq(p1, p2)?"True":"False");
    printf("p2>p3 is %s\n", points_gt(p2, p3)?"True":"False");

    return 0;
}
