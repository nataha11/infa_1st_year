void swap(int * x, int * y) {
  int t;
  t = * x;
  * x = * y;
  * y = t;
}
void sort3(int * a, int * b, int *c) {
    if (* a > * b)
        swap(a, b); 

    if (* b > * c) 
        swap (b, c);
        
    if (* a > * b)
        swap(a, b);
}