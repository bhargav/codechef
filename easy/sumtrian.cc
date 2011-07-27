#include <stdio.h>
#include <malloc.h>
#include <algorithm>
using namespace std;

int main()
{
    int t, n;
    scanf("%d\n", &t);
    
    for(int i = 0; i < t; i ++)
    {
        scanf("%d", &n);
        int *output = (int *)calloc((n+1), sizeof(int));

        for(int j = 1; j <= n; j++)
        {
            int row[j+1];
            row[0] = 0;

            for(int k = 1; k <= j; k++)
                scanf("%d", &row[k]);

            for(int k = j; k > 0; k--)
                output[k] = row[k] + (output[k] > output[k-1] ? output[k] : output[k-1]);                        
        }
        
        printf("%d\n", *max_element(output, output + n + 1));  
    }
    return 0;
}
