#include <stdio.h>
#include <Windows.h>

/**WINDOWS CONSOLE API FUNCTION*/
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{/**VARIABLES*/
    int RESULTA = 0;
    int RESULTB = 0;
    int inputA, inputB;
    int A, B;
/**LOOP*/
    while (RESULTA < 10 && RESULTB < 10)
    {/**Clear screen before each iteration of the loop*/
        system("cls");
/**Initialize scores for both players to zero in the Output*/
        printf("SCORE BOARD\n");
        printf("Player A: %d\n", RESULTA);
        printf("Player B: %d\n", RESULTB);
/**Get input score for player A and increament*/
        printf("Enter a score for player A: \n");
        scanf("%d", &inputA);
        RESULTA += inputA;
        A++;
/**Get input score for player B and increament*/
        printf("Enter a score for player B: \n");
        scanf("%d", &inputB);
        RESULTB += inputB;
        B++;
    }
/**set Various conditions as required*/
    if (RESULTA == 10 && RESULTB == 10)
    {
        printf("There is a tie");
    }
    else if (RESULTA == 10)
    {
        printf("Congratulations! Player A wins.\n");
    }
    else if (RESULTB == 10)
    {
        printf("Congratulations! Player B wins.\n");
    }
    else if (RESULTA > 10 && RESULTB > 10)
    {
        printf("INVALID SCORE");
    }
    else
    {
        printf("INVALID SCORE ENTRY");
    }
    return 0;
}
