#include <stdio.h>
int main()
{
    //WAP to accept two integer numbers and swap them using 4 different methods in C language
    int a,b,c;
    printf("Enter A");
    scanf("%d",&a);
    printf("Enter B");
    scanf("%d",&b);
    //Method 1
    a=a-b;
    b=a+b;
    a=b-a; 
    printf("\nMethod 1");
    printf("\nA is %d",a);
    printf("\nB is %d",b);
    //Method 2
    c=a;
    a=b;
    b=c;
    printf("\nMethod 2");
    printf("\nA is %d",b);
    printf("\nB is %d",a);
    //Method 3
    int *p1 = &a;
    int *p2 = &b;
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
    printf("\nMethod 3");
    printf("\nA is %d",a);
    printf("\nB is %d",b);
    //Method 4
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nMethod 4");
    printf("\nA is %d",b);
    printf("\nB is %d",a);
    return 0;
}