#include <stdio.h>

void *memcpy(void *destination, const void *source, size_t num);

int main()
{
    int a = 0x123456; // 4bit = 1/2 byte = 1 nibble
    int b = 0;

    memcpy(&b, &a, 2); // HEX 3456(2byte) -> DEC 13398

    printf("%d", b);

    return 0;
}

void *memcpy(void *destination, const void *source, size_t num)
{
    size_t i = 0;
    for (i = 0; i < num; ++i)
    {
        ((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
    }

    return destination;
}