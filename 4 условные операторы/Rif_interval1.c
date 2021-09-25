#include <stdio.h>
 
typedef struct {
  int frst;  
  int scnd;
} TimeInterval;
 
int m(int a, int b) {
  return (a < b) ? (a) : (b);
}
 
int b(int a, int b) {
  return (a > b) ? (a) : (b);
}
 
void getInterval(TimeInterval* t) {
  int frst;
  int scnd;
  scanf("%d%d", &frst, &scnd);
  t->frst = m(frst, scnd);
  t->scnd = b(frst, scnd);
  return;
}
 
void printInterval(TimeInterval t) {
  printf("%d %d\n", t.frst, t.scnd);
}
 
void swapTimeInterval(TimeInterval* a, TimeInterval* b) {
  int frst0, scnd0;
  frst0 = a->frst;
  scnd0 = a->scnd;
  a->frst = b->frst;
  a->scnd = b->scnd;
  b->frst = frst0;
  b->scnd = scnd0;
}
 
TimeInterval plusTime(TimeInterval a, TimeInterval b) {
  TimeInterval t = {-1, -1};
  if (b.frst < a.frst) {
    swapTimeInterval(&a, &b);
  }
 
  if (a.scnd >= b.frst && a.scnd <= b.scnd) {
    t.frst = a.frst;
    t.scnd = b.scnd;
  } else if (a.frst <= b.frst && b.scnd <= a.scnd) {
    t.frst = a.frst;
    t.scnd = a.scnd;
  } else if (a.frst >= b.frst && a.frst <= b.scnd && a.scnd > b.scnd) {
    t.frst = b.frst;
    t.scnd = a.scnd;
  } 
  return t;
}
 
int main() {
  TimeInterval t1;
  TimeInterval t2;
  getInterval(&t1);
  getInterval(&t2);
  TimeInterval plus = plusTime(t1, t2);
  if (plus.frst != -1) {
    printInterval(plus);
  } else {
    printf("-1");
  }
  return 0;
}