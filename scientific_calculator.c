#include <stdio.h>
int main()
{
    float N1, N2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &N1);

    printf("Enter operator: ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &N2);

    if (operator== '+')
    {
        result = N1+N2;
        printf("Result = %.2f", result);
    }
    else if (operator== '-')
    {
        result = N1-N2;
        printf("Result = %.2f", result);
    }
    else if (operator== '*')
    {
        result = N1 * N2;
        printf("Result = %.2f", result);
    }
    else if (operator== '/')
    {
        if (N2 == 0)
        {
            printf("Error: Cannot divide by zero.");
        }
        else
        {
            result = N1 /N2;
            printf("Result = %.2f", result);
        }
    }
    else
    {
        printf("Invalid operator.");
    }
    return 0;
}
