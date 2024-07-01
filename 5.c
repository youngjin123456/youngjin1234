#include <stdio.h>
#include <string.h>
int main()
{
    int x, y, i = 0;
    int z = 0;

    printf("값을 입력하세요.");
    scanf_s("%d", &z);

    for (x = 0; x < (z * 2) - 1; x++)
    {
        for (y = 0; y < z * 2; y++) {
            if (x < z) {
                if (y < x + 1) {
                    printf("*");
                    i = x;
                }
                else if (y < z * 2 - x - 1) {
                    printf(" ");
                }
                else {
                    printf("*");
                }
            }
            else if (x == z - 1) {
                printf("*");
            }
            else {
                if (y < i) {
                    printf("*");
                }
                else if (y < z * 2 - i) {
                    printf(" ");
                }
                else {
                    printf("*");
                }
            }

        }
        printf("\n");
        if (x > z - 1)i--;
    }
    return 0;
}