#include <stdio.h>
#define ll long long
int main()
{
    int n;
    scanf("%d", &n);

    ll t1[500] = {0};
    ll t2[500] = {0};
    t2[499] = 1;
    ll N_thTerm[500] = {0};
    for (int i = 1; i <= n; i++)
    {
        int carry = 0;
        for (int j = 499; j >= 0; j--)
        {
            N_thTerm[j] = (t1[j] + t2[j]) % 10 + carry;
            // printf("%d", N_thTerm[j]);
            carry = (t1[j] + t2[j]) / 10;
        }
        // printf("\n");

        for (int k = 499; k >= 0; k--)
        {
            t1[k] = t2[k];
            t2[k] = N_thTerm[k];
        }
    }

    for (int i = 0; i < 500; i++)
    {
        printf("%d", t1[i]);
    }

    return 0;
}