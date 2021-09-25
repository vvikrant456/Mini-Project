#include <stdio.h>
#define ll long long
ll main()
{
    ll t1 = 0;
    ll t2 = 1;
    ll res;
    int n;
    scanf("%d", &n);
    if (n <= 92)
    {
        for (int i = 1; i <= n; i++)
        {
            res = t1 + t2;
            t1 = t2;
            t2 = res;
        }
    }
    printf("%lld", t1);
    return 0;
}