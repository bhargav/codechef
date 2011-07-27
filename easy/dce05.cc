#include<stdio.h>

#define ul unsigned long

using namespace std;

int main()
{
    ul t, n;
    ul count;
    
    scanf("%ld", &t);
    for(ul i = 0; i < t; ++i)
    {
        scanf("%ld", &n);
        count = 1;
        if (n > 0)
            for(; n != 1; n = n/2)
                count = count * 2;
        printf("%ld\n", count);
    }
    return 0;
}
