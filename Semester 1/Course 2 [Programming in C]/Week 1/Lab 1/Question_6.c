#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if(x>0)
    {
        printf("1\n");
    }
    else if(x<0)
    {
        printf("0\n");
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
