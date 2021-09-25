void simpleFactors(long long a, int last, int n) {
if (a % last == 0) {
simpleFactors(a/last, last, n+1);
} else if (n == 0) {
simpleFactors(a, last+1, n);
} else if (n == 1) {
if (a != 1)
simpleFactors(a, last+1, 0);
printf("%d ", last);
} else if (n > 1) {
if (a != 1)
simpleFactors(a, last+1, 0);
printf("%d^%d ", last, n);
}
}