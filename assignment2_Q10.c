#include <stdio.h>
int main()
{
    //WAP to count prime numbers in an array.
    int i,u=0,m[5],flag,b;
    for(i=0;i<4;i++)
    {
        printf("Enter marks for %d students: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<4;i++)
    {
        flag=0;
        for (b=2;b<=m[i]/2;b++)
        {
            if (m[i]%b==0)
                flag=1;
        }
        if (flag==0)
            u++;
    }
    printf("The total no. of prime no. are %d",u);
    return 0;
}
