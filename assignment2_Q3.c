#include <stdio.h>
int main()
{
    //WAP to find who scored first “99” in an array marks
    int i,flag=0,m[5];
    for(i=0;i<5;i++)
    {
        printf("Enter marks for %d students: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<5;i++)
    {
        if (m[i]==99)
        {
            printf("%d student scored 99",i+1);
            flag=1;
            break;
        }
        else if (i==4 && flag==0)
        printf("none scored 99 marks");
    }
    return 0;
}