#include <stdio.h>
int main()
{
    //WAP to find maximum & minimum score in the Marks array.
    int i,u=0,t,m[5];
    for(i=0;i<5;i++)
    {
        printf("Enter marks of %d student: ",i+1);
        scanf("%d",&m[i]);
    }
    t=m[0];
    for(i=0;i<5;i++)
    {
        if (m[i]>u)
        u=m[i];
        if(m[i]<t)
        t=m[i];
    }
    printf("The max marks scored is %d",u);
    printf("\nThe min marks scored is %d",t);
    return 0;
}
