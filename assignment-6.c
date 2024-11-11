#include <stdio.h>
int main()
{
    //Tic-Tac-Toe Game
    int n,m,i,j,h=1;
    char a='O',b='X',c,g[3][4] = {{'1', '2', '3', '\0'},{'4', '5', '6', '\0'},{'7', '8', '9', '\0'}};
    printf("Player 1:%c\n",a);
    printf("Player 2:%c\n",b);
    printf("\n\n");
    while (h>0)
    {
        printf("Player 1\n");
        L1:
        printf("Enter row");
        scanf("%d",&n);
        printf("Enter column");
        scanf("%d",&m);
        if (g[n-1][m-1]=='O' || g[n-1][m-1]=='X')
        {
            printf("Invalid\n");
            goto L1;
        }
        else 
            g[n-1][m-1]=a;
        printf("\n");
        for (i=0;i<=2;i++)
        {
            for (j=0;j<=2;j++)
            {
                printf("%c ",g[i][j]);
            }
            printf("\n");
        }
        if  (  (g[0][0]==g[0][1] && g[0][0]==g[0][2]) || (g[1][0]==g[1][1] && g[1][0]==g[1][2]) 
            || (g[2][0]==g[2][1] && g[2][0]==g[2][2]) || (g[0][0]==g[1][0] && g[0][0]==g[2][0]) 
            || (g[0][1]==g[2][1] && g[0][1]==g[1][1]) || (g[0][2]==g[2][2] && g[0][2]==g[1][2]) 
            || (g[0][2]==g[1][2] && g[0][2]==g[2][0]) || (g[0][0]==g[1][1] && g[0][0]==g[2][2]))
        {
            printf("Player 1 is winner");
            break;
        }
        printf("Player 2\n");
        L2:
        printf("Enter row");
        scanf("%d",&n);
        printf("Enter column");
        scanf("%d",&m);
        if (g[n-1][m-1]=='O' || g[n-1][m-1]=='X')
        {
            printf("Invalid\n");
            goto L2;
        }
        else 
            g[n-1][m-1]=b;
        printf("\n");
        for (i=0;i<=2;i++)
        {
            for (j=0;j<=2;j++)
            {
                printf("%c ",g[i][j]);
            }
            printf("\n");
        }
        if  (  (g[0][0]==g[0][1] && g[0][0]==g[0][2]) || (g[1][0]==g[1][1] && g[1][0]==g[1][2]) 
            || (g[2][0]==g[2][1] && g[2][0]==g[2][2]) || (g[0][0]==g[1][0] && g[0][0]==g[2][0]) 
            || (g[0][1]==g[2][1] && g[0][1]==g[1][1]) || (g[0][2]==g[2][2] && g[0][2]==g[1][2]) 
            || (g[0][2]==g[1][2] && g[0][2]==g[2][0]) || (g[0][0]==g[1][1] && g[0][0]==g[2][2]))
        {
            printf("Player 2 is winner");
            break;
        }
    }
    return 0;
}