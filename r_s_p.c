#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int com = -1;
    int player = -1;
    int compare = 0;

    printf("Rock paper scissors\n");

    srand((unsigned int)time(NULL));

    while (0 > player || player > 2)
    {
        printf("Rock : 0, paper : 1, scissors : 2\n");
        printf("player choice : ");
        scanf("%d", &player);
    }

    com = rand() % 3;
    printf("computer : %s\n", (char *[]){"Rock", "paper", "scissors"}[com]); // access array

    compare = com - player;

    if (compare == 0)
    {
        printf("draw\n");
    }
    else if (compare == 2 || compare == -1)
    {
        printf("player win!\n");
    }
    else
    {
        printf("computer win!\n");
    }

    return 0;
}