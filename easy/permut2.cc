#include <stdio.h>
#include <string.h>
#define ul unsigned long
using namespace std;

int main()
{
    ul n;
    scanf("%ld", &n);
    
    int d;
    while(n != 0)
    {
        int orig[n+1], inv[n+1];
        
        for(ul i = 1; i <= n; i++)
        {
            scanf("%ld", &d);
            orig[i] = d;
            inv[d] = i;
        }
        
        (memcmp(orig+1, inv+1, n * sizeof(int)) == 0 ? printf("ambiguous\n") : printf("not ambiguous\n"));
        
        scanf("%ld", &n);
    }
    return 0;
}
