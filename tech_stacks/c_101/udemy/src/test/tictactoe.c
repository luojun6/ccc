#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <unistd.h> // Used for building getch()
#include <termios.h> // Used for building getch()

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int checkFowWin();
void displayBoard();
void markBoard(char mark);
char getch(void);

int main()
{
    int gameStatus;
    char mark;

    player = 1;

do
{
    displayBoard();

    // Change players
    player = (player % 2) ? 1 : 2;

    // Get input
    printf("Player %d, enter a number: ", player);
    scanf("%d", &choice);

    mark = (player == 1) ? 'X' : 'O';

    markBoard(mark);
    gameStatus = checkFowWin();
    player++;

}while (gameStatus == -1);

    return 0;
}


/**************************************************
Funciton to return game status
1 for game is over with result
-1 for game is in progress
0 game is over and no result
***************************************************/
int checkFowWin()
{
    int returnValue = 0;
    if (square[1] == square[2] && square[2] == square[3])
        returnValue = 1;
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;
    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;
    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;
    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;
    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;
    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;
    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' && 
             square[7] != '7' && square[8] != '8' && square[9] != '9') 
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}

/**************************************************
Funciton to show the board of tic tac toe with board mark
***************************************************/
void displayBoard()
{
    system("cls");

    printf("\n\n\t Tic Tac Toe\n\n");
    printf("Player 1 (X)    -   Player 2 (O)\n\n\n");

    printf("      |      |      \n");
    printf("  %c   |  %c   |  %c  \n", square[1], square[2], square[3]);

    printf("______|______|______\n");
    printf("      |      |      \n");

    printf("  %c   |  %c   |  %c  \n", square[4], square[5], square[6]);

    printf("______|______|______\n");
    printf("      |      |      \n");

    printf("  %c   |  %c   |  %c  \n", square[7], square[8], square[9]);
    printf("      |      |      \n");
}


/**************************************************
Funciton to set the board with the correct character, 
X or O in the correct spot in the array
***************************************************/
void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] == '2')
        square[2] = mark;
    else if (choice == 3 && square[3] == '3')
        square[3] = mark;
    else if (choice == 4 && square[4] == '4')
        square[4] = mark;
    else if (choice == 5 && square[5] == '5')
        square[5] = mark;
    else if (choice == 6 && square[6] == '6')
        square[6] = mark;
    else if (choice == 7 && square[7] == '7')
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')
        square[8] = mark;
    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        printf("Invalid move!");
        player--;
        getch();
    }
}

char getch(void)
{
    char buf = 0;
    struct termios old = {0};
    fflush(stdout);
    if(tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if(tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr ICANON");
    if(read(0, &buf, 1) < 0)
        perror("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if(tcsetattr(0, TCSADRAIN, &old) < 0)
        perror("tcsetattr ~ICANON");
    printf("%c\n", buf);
    return buf;
 }