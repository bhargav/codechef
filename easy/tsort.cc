#include <stdio.h>
#include <vector>
#include <algorithm>
#define ul unsigned long
using namespace std;

int main()
{
    ul t;
    scanf("%ld", &t);
    vector<ul> data;
    
    ul d;
    for(ul i = 0; i < t; i++)
    {
         scanf("%ld", &d);
         data.push_back(d);       
    }
    sort(data.begin(), data.end());
    
    vector<ul>::iterator it;
    for(it = data.begin(); it != data.end(); it++)
        printf("%ld\n", *it);
    return 0;
}
