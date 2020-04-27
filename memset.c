#include <stdio.h>

void *memset(void *ptr, int value, size_t num);

int main()
{
    int i = 0;
    int arr[12];

    memset(arr, 1, 12 * sizeof(int));
    for (i = 0; i < 12; i++)
        printf("%d\n", arr[i]);
}

void *memset(void *ptr, int value, size_t num)
{
    size_t i = 0;

    for (i = 0; i < num; ++i)
    {
        ((unsigned char *)ptr)[i] = (unsigned char)value;
    }

    return ptr;
}