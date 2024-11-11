#include <stdio.h>
int main()
{
    //WAP to find Who & how many students have scored 99 in an array Marks
    int n,i,u=0;
    printf("Enter no of students: ");
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        printf("Enter marks for %d students: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        if (m[i]==99)
        {
            printf("\n%d student scored 99",i+1);
            u++;
        }
    }
    (u==0)?printf("\nnone scored 99 marks"):printf("\n%d students scored 99",u);
    return 0;
}
