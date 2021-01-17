#include <stdio.h>

char *strcpy(char *destination, const char *source);

int main()
{
    char arr[10] = {0};
    char *string = "orange";

    strcpy(arr, string);

    printf("%s", arr);

    return 0;
}

char *strcpy(char *destination, const char *source)
{
    size_t i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        ++i;
    }

    destination[i] = '\0';

    return 0;
}