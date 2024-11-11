#include <stdio.h>
int main()
{
    //WAP to check whether score is even or odd in an array.
    int i,u=0,m[5];
    for(i=0;i<=4;i++)
    {
        printf("Enter marks for %d students: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<=4;i++)
    {
        if (m[i]%2==0)
            printf("The score is even:%d\n",m[i]);
        else 
            printf("The score is odd:%d\n",m[i]);
    }
    return 0;
}
