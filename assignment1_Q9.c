#include <stdio.h>
int main()
{   /*WAP to display
    0        0 
    01      01
    010    010
    0101  0101
    0101001010  */

    int a,b;
    for (a=1;a<=5;a++)
    {
        for (b=1;b<=10;b++)
        {
            if ((a==1 && (b>=2 && b<=9)) || a==2 && (b>=3 && b<=8) || a==3 && (b>=4 && b<=7) || 
            a==4 && (b==5 || b==6))
            {
                printf(" ");
            }
            else if (b==1 || b==3 || b==5 || b==6 || a==4 && b==7 || (a==3 || a==5) && b==8 || 
            (a==2 || a==4) && b==9 || (a==1 || a==3 || a==5) && b==10)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}