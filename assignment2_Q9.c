#include <stdio.h>
int main()
{
    //WAP to find a peak element which is not smaller than its neighbors.
    int i,m[5];
    for(i=0;i<5;i++)
    {
        printf("Enter marks of %d student: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=1;i<5-1;i++)
    {
        if (m[i]>m[i-1] && m[i]>m[i+1])
        printf("peak value is %d",m[i]);
    }
    return 0;
}
