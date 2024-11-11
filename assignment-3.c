#include <stdio.h>
#include <math.h>
//Make a calculator-The functions are add,subtract,multiply,divide,log,sqrt
void add(void);
void subtract(void);
void product(void);
void divide(void);
void logarithmic(void);
void sqroot(void);
int main()
{
    int z;
    printf("1) Addition \n2) Subtract \n3) Multiply \n4) Division \n5) log \n6) sqrt  \nEnter choice: ");
    scanf("%d",&z);
    switch(z)
    {
        case 1:
        add();
        break;
        case 2:
        subtract();
        break;
        case 3:
        product();
        break;
        case 4:
        divide();
        break;
        case 5:
        logarithmic();
        break;
        case 6:
        sqroot();
        break;
    }
    return 0;
}
void add()
{
    int a,x,y;
    printf("Enter no. 1: ");
    scanf("%d",&x);
    printf("Enter no. 2: ");
    scanf("%d",&y);
    a=x+y;
    printf("The sum is %d ",a);
}
void subtract()
{
    int b,x,y;
    printf("Enter no. 1: ");
    scanf("%d",&x);
    printf("Enter no. 2: ");
    scanf("%d",&y);
    b=x-y;
    printf("The difference is %d ",b);
}
void product()
{
    int c,x,y;
    printf("Enter no. 1: ");
    scanf("%d",&x);
    printf("Enter no. 2: ");
    scanf("%d",&y);
    c=x*y;
    printf("The product is %d ",c);
}
void divide()
{
    int d,x,y;
    printf("Enter no. 1: ");
    scanf("%d",&x);
    printf("Enter no. 2: ");
    scanf("%d",&y);
    d=x/y;
    printf("The  is %d ",d);
}
void logarithmic()
{
    double e,x,y;
    printf("Enter no. ");
    scanf("%lf",&x);
    printf("Enter base: ");
    scanf("%lf",&y);
    e=log(x)/log(y);
    printf("The value of log_%lf(%lf) is %lf ",y,x,e);
}
void sqroot()
{
    float x;
    printf("Enter no. : ");
    scanf("%f",&x);
    printf("The square root is %f",sqrt(x));
}    
