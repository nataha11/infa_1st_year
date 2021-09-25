#include <stdio.h>

long long int revers(long long n)
{
    long long a = 0;
    while (n != 0)
    {
        a = a * 10 + n % 10;
        n = n / 10;
    }
    return a;
}

int main()
{
    long long n;
    scanf("%lld", &n);    
    long long int n1 = revers(n);
    printf("%lld\n", n1);
    
    return 0;
}