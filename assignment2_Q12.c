#include <stdio.h>
int main()
{
    /*WAP to implement delete-Front, any position in between & end in an array. Print
    the array before delete & after delete.*/
    int n,i,y,a=0,m[20];
    printf("Enter no of entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d no: ",i+1);
        scanf("%d",&m[i]);
    }
    printf("\nArray before deleting");
    for(i=0;i<n;i++)
        printf("\n%d",m[i]);
    printf("\n");
    r:
    printf("Enter no. to delete: ");
    scanf("%d",&y);
    for(i=0;i<n;i++)
    {
        if (m[i]==y)
        {
            a=i;
            break;
        }
        else if(i==n-1 && a==0)
        {
            printf("no not found\n");
            goto r;
        }
    }
    for (i=a+1;i<n;i++)
        m[i-1]=m[i];
    printf("Array after deleting");
    for(i=0;i<n-1;i++)
        printf("\n%d",m[i]);
    return 0;
}