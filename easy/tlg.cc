#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum1 = 0, sum2 = 0,max1 = 0, max2 = 0,d1, d2;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &d1, &d2);
        sum1 += d1;
        sum2 += d2;
        (sum1 > sum2 ? max1 = max(max1, sum1-sum2) : max2 = max(max2, sum2-sum1));
    }
    
    (max1 > max2 ? printf("1 %d", max1) : printf("2 %d", max2));
    return 0;
}
