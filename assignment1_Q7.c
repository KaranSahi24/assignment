#include <stdio.h>
#include <math.h>
long long dconvert(long long n);
long long bconvert(int);
int main()
{
    //WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice.
    int c,g;
    long long n,bin;
    printf("1)Binary to decimal \n2)Decimal to binary \nEnter choice: ");
    scanf("%d",&c);
    if (c==1)
    {
        printf("Enter a binary number: ");
        scanf("%lld", &n);
        printf("%lld in binary = %lld in decimal", n, dconvert(n));
    }
    else
    {
        printf("Enter a decimal number: ");
        scanf("%d", &g);
        bin = bconvert(g);
        printf("%d in decimal =  %lld in binary", g, bin);
    }
    return 0;
}
long long dconvert(long long n) 
{
    long long dec = 0;
    int i = 0, rem;
    while (n != 0)
    {  rem = n % 10;
        dec+=rem*pow(2,i); 
        n /= 10;
        ++i;
    }
    return dec;
}
long long bconvert(int g)
{
    long long bin = 0;
    int rem, i = 1;
    while (g != 0) 
    {
        rem = g % 2;
        g /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
