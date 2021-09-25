#include <stdio.h>
#define ll long long

ll fib91()
{
    ll t1 = 0;
    ll t2 = 1;
    ll res;

    for (int i = 1; i <= 91; i++)
    {
        res = t1 + t2;
        t1 = t2;
        t2 = res;
    }
    return t1;
}

ll fib92()
{
    ll t1 = 0;
    ll t2 = 1;
    ll res;

    for (int i = 1; i <= 92; i++)
    {
        res = t1 + t2;
        t1 = t2;
        t2 = res;
    }
    return t1;
}

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

        printf("%lld\n", t1);
    }

    if (n > 92)
    {

        ll fib_91 = fib91();
        ll fib_92 = fib92();

        int num1[400], num2[400];
        for (int i = 0; i < 400; i++)
        {
            num1[i] = 0;
            num2[i] = 0;
        }
        int j = 399;
        while (fib_91)
        {
            num1[j] = fib_91 % 10;
            fib_91 /= 10;
            j--;
        }
        j = 399;

        while (fib_92)
        {
            num2[j] = fib_92 % 10;
            fib_92 /= 10;
            j--;
        }

        int nextFib[400] = {0}; //92
        int carry = 0;
        for (int i = 399; i >= 0; i--)
        {
            nextFib[i] = (num1[i] + num2[i]) % 10 + carry;

            carry = (num1[i] + num2[i]) / 10;
        }

        for (int i = 0; i < 400; i++)
        {
            printf("%d", nextFib[i]);
        }
    }
    return 0;
}