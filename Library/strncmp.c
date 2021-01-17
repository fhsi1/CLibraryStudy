#include <stdio.h>

int strncmp(const char *str1, const char *str2, size_t num);

int main()
{
    char *a = "orange";
    char *b = "orango";

    int result = strncmp(a, b, 6);

    printf("%d", result);

    return 0;
}

int strncmp(const char *str1, const char *str2, size_t num)
{
    int result = 0;
    size_t i = 0;

    for (i = 0; i < num - 1; i++)
    {
        if (str1[i] != str2[i] || str1[i] == '\0')
        {
            break;
        }
    }

    result = str1[i] - str2[i];
    if (result != 0)
    {
        result >>= 31;
        result |= 1;
    }

    return result;
}