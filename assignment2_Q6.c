#include <stdio.h>
int main()
{
    //WAP to find average score of the Marks array
    int i,u=0,m[5];
    for(i=0;i<=4;i++)
    {
        printf("Enter marks for %d students: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<=4;i++)
    {
        u+=m[i];
    }
    printf("The average marks is %d",u/5);
    return 0;
}
