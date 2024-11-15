#include <stdio.h>
#include <string.h>
#include <ctype.h>
void game(char*);
int main()
{
    //Hangman game
    char word[] = "colonel"; 
    game(word);
    return 0;
}
void game(char *word) 
{
    int len= strlen(word),i,cguesses = 0,found=0,tries = 6,word_guessed = 0;
    char guessed[len],guess;

    for (i = 0; i < len; i++)
    {
        guessed[i] = '_';
    }

    printf("\n\tWelcome to Hangman!\t\n");

    while (tries!=0 && !word_guessed) 
    {
        printf("\nWord: ");
        for (i=0;i<len; i++) 
        {
            printf("%c ", guessed[i]);
        }
        
        printf("\nGuess a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        for (i=0;i<len;i++)
        {
            if (word[i]==guess && guessed[i] != guess)
            {
                guessed[i] = guess;
                cguesses++;
                found = 1;
            }
        }

        if (found == 0) 
        {
            tries--;
            printf("Incorrect guess. You have %d tries left.\n",tries);
        }

        if (cguesses == len)
        {
            word_guessed = 1;
        }
    }

    if (word_guessed==1) 
    {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    }
    else 
    {
        printf("\nSorry, you've lost! The word was: %s\n", word);
    }
}