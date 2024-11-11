#include<stdio.h>
int subtract(int,int);
int main()
{
    //WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
    int x,y;
    printf("Enter no. 1 ");
    scanf("%d",&x);
    printf("Enter no. 2 ");
    scanf("%d",&y);
    printf("the difference is %d", subtract(x, y));
    return 0;
}
int subtract(int x, int y)
{
    while (y != 0)
    {
        int borrow;
        borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}