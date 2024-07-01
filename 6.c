#include <stdio.h>
int main()
{
    int input, i, j;
    scanf_s("%d", &input);
    for (i = 1; i <= input; i++)
    {
        if (i == 1) {
            for (j = 1; j <= (input - i); j++)
                printf(" ");
            for (j = 1; j <= i * 2 - 1; j++)
                printf("*");
        }
        else if (i < input)
        {
            for (j = 1; j <= (input - i); j++)
                printf(" ");
            for (j = input - i; j <= input + i - 1; j++)
                if (j == (input - i)) {
                    printf("*");
                }
                else if (j < input + i - 2)
                {
                    printf(" ");
                }
                else if (j == input + i - 1)
                {
                    printf("*");
                }

        }
        else
        {
            for (j = 1; j <= (input - i); j++)
                printf(" ");
            for (j = 1; j <= i * 2 - 1; j++)
                printf("*");

        }
        printf("\n");
    }
}
