#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int sum, difference, product, quotient, remainder;

    printf("Enter the integers (separated by space): ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("The sum, difference, product, quotient, remainder of %d and %d are %d, %d, %d, %d, %d.\n", num1, num2, sum, difference, product, quotient, remainder);

    ++num1;
    --num2;

    printf("num1 after increment is %d.\n", num1);
    printf("num2 after decrement is %d.\n", num2);

    quotient = num1/ num2;
    printf("The new quotient of %d and %d is %d.\n", num1, num2, quotient);
    return 0;
}
