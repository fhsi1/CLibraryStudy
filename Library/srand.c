#include <stdio.h>

void srand(unsigned int seed);
int rand(void);

int main()
{
    int i = 0;

    srand(0);

    for (i = 0; i < 100; i++)
    {
        int random = rand() % 100;
        printf("%d\n", random);
    }

    return 0;
}

static unsigned long int next = 1; // seed value store

void srand(unsigned int seed)
{
    next = seed;
}

int rand(void)
{
    next = next + 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}
