#include <stdio.h>
int main()
{
    //WAP to find sum of all scores in Marks array
    int i,u=0,m[5];
    for(i=0;i<5;i++)
    {
        printf("Enter marks for %d students: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<5;i++)
    {
        u+=m[i];
    }
    printf("The total marks scored by all students is %d",u);
    return 0;
}
