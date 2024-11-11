#include <stdio.h>
int main()
{
    /*Given an array of n integers. The task is to print the duplicates in the given array.
    If there are no duplicates then print -1
    Examples:
    Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
    Output: 2 10 11 */
    int i,u=0,m[6],j;
    for(i=0;i<=5;i++)
    {
        printf("Enter no.: ");
        scanf("%d",&m[i]);
    }
    printf("{%d,%d,%d,%d,%d,%d}\n",m[0],m[1],m[2],m[3],m[4],m[5]);
    for(i=0;i<=5;i++)
    {
        for(j=i+1;j<=5;j++)
        if (m[i]==m[j] && i!=j)
        {
            printf("%d ",m[i]);
            u++;
        }

    }
    if (u==0)
        printf("-1");
    return 0;
}