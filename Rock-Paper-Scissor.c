#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//here is the function to implement the games
int Game(char you,char computer)
{
    /*if both the user and computer 
    has choose the same thing*/
    if(you==computer)
    {
        return -1;
    }
    /*if user choose stone 
    and computer's choice is paper*/
    if(you=='s'&& computer=='p')
    {
        return 0;
    }
    /*if user choose paper and
    computer's choice is stone*/
    else if(you=='p'&& computer=='s')
    {
        return 1;
        /*Making game using c language*/
        /*  "STONE  PAPER SCISSOR"  */
    }
    /*if you choose stone
    and computer's choice is scissor */
    if(you=='s'&& computer=='z')
    {
        return 1;
    }
    /*if you choose scissor
    and computer's choice is stone */
    else if(you=='z'&& computer=='s')
    {
        return 0;
    }
    /*if you choose paper
    and computer's choice is scissor */
    if(you=='p'&& computer=='z')
    {
        return 0;
    }
    /*if you choose scissor
    and computer's choice is paper*/
    else if(you=='z'&& computer=='p')
    {
        return 1;
    }

}
int main()
{
    /*here n stores the random number*/
    int n;
    char you;
    char computer;
    char result;
    /*choose random number every time*/
    srand(time(NULL));
    /*make the random number less than 100, 
    divided it by 100*/
    n=rand()%100;
    /*now applying conditon*/
    /*if n is any number less than 33*/
    if(n<33)
    {
        computer='s';
    }
    /*here n is greater than 33 and less than 66*/
    else if(n>33 && n<66)
    {
        computer='p';
    }
    else 
    {
        computer='z';
    }
    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
 
    // input from the user
    scanf("%c", &you);
 
    // Function Call to play the game
    result = Game(you, computer);
 
    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else { 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
        printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",you, computer);
 
    return 0;
}