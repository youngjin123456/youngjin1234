#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    printf("input Arithmetic Operation\n");
    printf("ex)      3.4 * 8.5\n");
    printf("         2.9 - 5.4\n");
    printf("         3.9 * 8.0\n");
    printf("         3.9 ^ 8\n");
    printf("\n");

    printf("input: ");
    scanf_s("%f", &num1);
    scanf_s("%c", &operator);
    scanf_s("%f", &num2);

    float result = 1;

    if (operator == 43) {
        result = num1 + num2;
        printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (operator == 94) {
        for(int k=0;k<num2;k++){
            result = result * num1;
        }
        printf("\n%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (operator == 45) {
        result = num1 - num2;
        printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (operator == 42) {
        result = num1 * num2;
        printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (operator == 47) {
        if (num2 == 0) {
            printf("0으로 나눌 수 없습니다.\n");
            return 1;
        }
        result = num1 / num2;
        printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
    }
    else {
        printf("잘못된 연산자입니다.\n");
        return 1;
    }

    return 0;
}
