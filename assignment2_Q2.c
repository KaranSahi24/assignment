#include <stdio.h>
int main()
{
    /*WAP to print grade of students as per their marks given in an array. (>=75-- A
`   grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade)*/
    int i,m[5];
    for(i=0;i<5;i++)
    {
        printf("Enter marks for %d students: ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<5;i++)
    {
        (m[i]>=75)?printf("Grade of %d student: A",i+1):(m[i]>=60 && m[i]<=74)?
        printf("\nGrade of %d student: B",i+1):(m[i]>=40 && m[i]<=59)?
        printf("\nGrade of %d student: C",i+1):(m[i]<=40)?printf("\nGrade of %d student: D",i+1):
        printf("%d:Invalid Marks",i+1);
    }
    return 0;
}