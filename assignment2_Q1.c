#include <stdio.h>
int main()
{
    //WAP to increase every student mark by 5 & then print the updated array.
    int i,m[5];
    for(i=0;i<=4;i++)
    {
        printf("Enter marks for %d students: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("\nmarks of %d student: %d",i+1,m[i]);
    }
    return 0;
}