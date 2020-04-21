#include <stdio.h>

int strcmp(const char *str1, const char *str2);

int main()
{
    char arr[10] = "orange";
    char *string = "oranga";
    int result = 0;

    result = strcmp(arr, string);

    printf("result : %d\n", result);

    return 0;
}

int strcmp(const char *str1, const char *str2)
{
    int result = 0;
    size_t i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
        ++i;

    result = str1[i] - str2[i];

    return result;
}