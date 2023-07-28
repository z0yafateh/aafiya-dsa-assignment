/* Random Character Generator */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char set[17] = "0ABCDEF123456789";

    num = rand() % 16;

    printf("The randomly generated character is %c", set[num]);

    return 0;

}