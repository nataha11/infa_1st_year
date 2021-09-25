#include <stdio.h>

long long int nod(long long int a, long long int b) {
return b ? nod(b, a % b) : a;
}

long long int nok (long long int a, long long int b, long long int x) {
return a / x * b;
}

int main()
{
long long int a, b;
scanf ("%lli%lli", &a, &b);
long long int x = nod (a, b);
long long int y = nok (a, b, x);
printf ("%lli %lli", x, y);

return 0;
}