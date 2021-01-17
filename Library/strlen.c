#include <stdio.h>

size_t strlen(const char *str);

int main()
{
    int len = strlen("orange");

    printf("%d\n", len);

    return 0;
}

size_t strlen(const char *str)
{
    size_t i = 0;

    while (str[i] != '\0')
    {
        ++i;
    }
    return i;
}