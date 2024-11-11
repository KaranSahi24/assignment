#include <stdio.h>
//WAP to read two integers and print their HCF (Highest Common Factor).
int hcf(int x,int y)
{
    int i,n;
    for(i=x-1;i>=2;i--)
    {
        if (x%i==0 && y%i==0)
        {
            printf("The HCF is %d",i);
            break;
        }
    }
}
int main()
{
    int x,y;
    printf("Enter no. 1: ");
    scanf("%d",&x);
    printf("Enter no. 2: ");
    scanf("%d",&y);
    hcf(x,y);
    return 0;
}
