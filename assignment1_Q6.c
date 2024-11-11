#include <stdio.h>
int main()
{
    /*WAP to accept a coordinate point in an XY coordinate system and determine in which
    quadrant the coordinate point lies.*/
    int x,y,u=0;
    printf("Enter x coordinate: ");
    scanf("%d",&x);
    printf("Enter y coordinate: ");
    scanf("%d",&y);
    if(x>0 && y>0)
        printf("The coordinate point (%d,%d) lies in the First quadrant.",x,y);
    else if (x<0 && y>0)
        printf("The coordinate point (%d,%d) lies in the Second quadrant.",x,y);
    else if (x<0 && y<0)
        printf("The coordinate point (%d,%d) lies in the Third quadrant.",x,y);
    else
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.",x,y);
    return 0;
}