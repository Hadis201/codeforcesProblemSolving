#include<stdio.h>
#include<math.h>

int main()
{
    long long int a, m, n;
    long long x, y;
    scanf("%lld %lld %lld", &n, &m, &a);

    if(m%a == 0) x = m/a;
    else x = m/a+1;

    if(n%a == 0) y = n/a;
    else y = n/a+1;

    long long z = x*y;
    //int x = ceil(10.00000001);
    printf("%lld", z);

    return 0;
}
