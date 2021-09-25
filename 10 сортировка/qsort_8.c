int cmp_Point (const void* p1, const void * p2) {
    struct Point *a = (struct Point *) p1;
    struct Point *b = (struct Point *) p2;
    int d_a = (a->x) * (a->x) + (a->y) * (a->y);
    int d_b = (b->x) * (b->x) + (b->y) * (b->y);
    return (d_a > d_b) - (d_a < d_b);
}