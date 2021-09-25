void swap(int * a, int * b) {
  int t;
  t = * a;
  * a = * b;
  * b = t;
}

void sort2(int * a, int * b) {
    if (* a > * b)
        swap (a, b);
}