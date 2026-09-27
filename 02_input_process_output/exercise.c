#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("Enter another integer: ");
    scanf("%d", &num2);

    printf("Sum = %d\n", num1+ num2);
    printf("Product = %d\n", num1 * num2);
    printf("Difference = %d\n", num1 -num2);

    return 0;
}
