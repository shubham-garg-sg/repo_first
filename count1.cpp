#include <stdio.h>

const char string[] = "This is a null terminated string.";

int main(int argc, char const *argv[])
{
    int count=0;

    while (string[count] != 0)
    {
        /* code */
        count++;
    }
     
    printf("The number of characters are: %d\n", count);
    return 0;
}
