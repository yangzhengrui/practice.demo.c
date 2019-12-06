#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i <= j)
            {
                printf("%d*%d=%-2d  ", i, j, i * j);
            }
        }
        putchar('\n');
    }
    return 0;
}