#include <stdio.h>
int main()
{
    /*WAP to implement Insert -Front, any position in between & end in an array. Print
    the array before insert & after insert.*/
    int n,i,y,a,m[20];
    printf("Enter no of entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d no: ",i+1);
        scanf("%d",&m[i]);
    }
    printf("\nArray before inserting");
    for(i=0;i<=n;i++)
        printf("\n%d",m[i]); 
    printf("Enter no. to insert: ");
    scanf("%d",&y);
    printf("Enter position: ");
    scanf("%d",&a);
    for(i=n-1;i>=a-1;i--)
        m[i+1]=m[i];
    m[a-1]=y;
    printf("Array after deleting");
    for(i=0;i<=n;i++)
        printf("\n%d",m[i]);
    return 0;
}
