#include<stdio.h>

#define ull unsigned long long

int main()
{
    int t, n;
    scanf("%d", &t);
    
    ull fac[101];
    int fill = 0;
    fac[0] = 1;
    
    for(int i = 0; i < t; ++i)
    {
        scanf("%d", &n);
        
        if (n > fill) 
        {
            for(int j = fill + 1; j <= n; j++)
                fac[j] = fac[j-1]*j;
            fill = n;
        }
            
        printf("%lld\n", fac[n]);
    }
    return 0;
}

