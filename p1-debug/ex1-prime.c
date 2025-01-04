#include <stdio.h>
int prime(int n)
{
    if (n<2)
    {
        printf("%d is Neither Prime Nor Composite\n", n);
        return 0;
    }
    else
    {
        for (int i=2; (i*i)<= n; i++)
        {
            if (n%i == 0)
            {
                return 0;
            }
        }
    return 1;
    }
}
int main()
{
    int n, res;
    scanf("%d",&n);
    res = prime(n);
    if(res==0)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
    return 0;
}

