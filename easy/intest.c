#include<stdio.h>

#define ul unsigned long
#define f(I,N) for(I = 0; I < N; ++I)

int main()
{
    ul n, k;
    scanf("%ld %ld", &n, &k);

    ul i, count = 0, num;
    f(i, n)
    {
        scanf("%ld", &num);
        if (num % k == 0)
            count++;
    }    
    printf("%ld", count);
    return 0;
}
