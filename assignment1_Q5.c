#include <stdio.h>
int main()
{
    // WAP to check whether number is Perfect Number or not
    int x,i,u=0;
    printf("Enter no: ");
    scanf("%d",&x);
    for (i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            u+=i;
        }
    }
    if (u==x)
        printf("It is a perfect no.");
    else
        printf("It is not a perfect no.");
    return 0;
}