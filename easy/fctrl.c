#include<stdio.h>

#define ul unsigned long
#define f(I,N) for(I = 0; I < N; ++I)

int main()
{
    ul T, N;
    scanf("%ld", &T);
    
    ul i, count, x, temp;    
    f(i, T)
    {
        count = 0;
        x = 5;
        scanf("%ld", &N);
        do 
        {
        temp = N/x;
        count += temp;
        x *= 5;
        }while(temp != 0);
        printf("%ld\n", count);
    }
    return 0;
}
