#include<stdio.h>

int fact(int n)
{
    int fact = 1;
    while(n>0)
    {
        fact*=n;
        n--;
    }
    return fact;
}

int main()
{
    printf("%d", fact(5));
    return 0;
}

