#include <stdio.h>
//Rock,paper,scissor game
int main()
{
    char a,c;
    int n,i,d,b;
    for (i=1;i<=3;i++)
    {
        printf("\n\tRound :%d\n",i);

        printf("S for Scissors \nR for Rock \nP for Paper\n");
        printf("Enter choice (R,P,S): ");
        scanf("%s",&a);

        printf("Enter random no.: ");
        scanf("%d",&n);
        if (n<33)
            c = 'R';
        else if (n>33 && n<66)
            c = 'P';
        else if (n>66 && n<100)
            c = 'S';
    
        printf("Computer: %c",c);
        printf("\nPlayer: %c\n",a);

        if (c=='R' && a=='P')
        {
            printf("The Player is the winner ");
            d++;
        }    
        else if (c=='P' && a=='R')
        {
            printf("The Computer is the winner ");
            b++;
        }
        else if (c=='R' && a=='S')
        {
            printf("The Computer is the winner ");
            b++;
        }
        else if (c=='S' && a=='R')
        {
            printf("The Player is the winner ");
            d++;
        }
        else if (c=='S' && a=='P')
        {
            printf("The Computer is the winner ");
            b++;
        }
        else if (c=='P' && a=='S')
        {
            printf("The Player is the winner ");
            d++;
        }
        else if (c==a)
        {
            printf("Tie");
        }
        printf("\n");
    }

    if (b>a)
        printf("\n\nThe computer is final winner");
    else if(b==c)
        printf("Tie");
    else
        printf("\n\nThe Player is final winner");
    return 0;
}
