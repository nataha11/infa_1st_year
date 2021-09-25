int correctTriangle (struct Triangle t) {
    if (t.a + t.b > t.c && t.a + t.c > t.b && t.b + t.c > t.a) {
        return 1;
    } else {
        return 0;
    }
}
