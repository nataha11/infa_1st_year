unsigned int fib(unsigned int n) {
if (n <=1) {
return 1;
} else {
int chi = fib(n-1) + fib (n-2);
return chi;
}
}