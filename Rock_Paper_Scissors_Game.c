// Stone,Paper,Scissors is a game most of us have playedduring school timwe.
// Write a C program capable of playing this game with you.
// your program should be able to print the result after you choose stone,paper or scissors.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int stonepaperscissors(char you, char comp)
{
    // returns 1 if you win, -1 and if you lose and 0 when you draw
    // Condition for draw(ss,pp,cc)
    if (you == comp)
    {
        return 0;
    }
    // Non-Draw condition(sp,cp,sc)
    if (you == 's' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'c')
    {
        return 1;
    }
    else if (you == 'c' && comp == 's')
    {
        return -1;
    }
    if (you == 'p' && comp == 'c')
    {
        return -1;
    }
    else if (you == 'c' && comp == 'p')
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'c';
    }

    printf("Enter 's' for stone,'p' for paper, 'c' for scissors \n ");
    scanf("%c", &you);
    int result = stonepaperscissors(you, comp);
    printf("You Chose %c and Computer Chose %c.\n", you, comp);
    if (result == 0)
    {
        printf("Game Draw\n");
    }
    else if (result == 1)
    {
        printf("You Win\n");
    }
    else if (result == -1)
    {
        printf("You Lose\n");
    }
    return 0;
}