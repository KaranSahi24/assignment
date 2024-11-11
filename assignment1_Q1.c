#include <stdio.h>
#include <math.h>
//WAP to check whether a given is Armstrong or not.
int reverse(int a)
{
    int rem=1,p=0,c=a,i=a,b=0,g=0;
    while(a!=0)
    {
        rem=a%10;
        b++;
        a=a/10;
    }
    while(c!=0)
    {
        rem=c%10;
        g+=pow(rem,b);
        c=c/10;
    }
    if (g==i)
        printf("%d is armstrong no.",i);
    else
        printf("%d is armstrong no.",i);
}
int main()
{
    int a;
    printf("Enter no. ");
    scanf("%d",&a);
    reverse(a);
    return 0;
}