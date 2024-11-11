#include <stdio.h>
int main()
{
    /*WAP to print below mentioned pattern:
    1
    01
    101
    0101
    10101 */
    int a,b;
    for (a=1;a<=5;a++)
    {
        for (b=1;b<=a;b++)
        {
            if (a%2==0 && b%2!=0 || a%2!=0 && b%2==0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    return 0;
}