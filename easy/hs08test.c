#include<stdio.h>

int main()
{
    int X;
    float Y;
    scanf("%d %f", &X, &Y);
    if (((X % 5) != 0) || (X + 0.5 > Y))
        printf("%.2f", Y);
    else
        printf("%.2f", Y - X - 0.5);
   return 0;
}
