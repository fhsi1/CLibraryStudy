#include <stdio.h>

char *strncpy(char *destination, const char *source, size_t num);

int main()
{
    char str[10] = {'\0'};
    char *orange = "orange!";

    strncpy(str, orange, 8);

    printf("%s", str);

    return 0;
}

char *strncpy(char *destination, const char *source, size_t num)
{
    size_t i = 0;

    for (i = 0; i < num; ++i)
    {
        destination[i] = source[i];

        if (source[i] == '\0')
        {
            break;
        }
    }
    return destination;
}