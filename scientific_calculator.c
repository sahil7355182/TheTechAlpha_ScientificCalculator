#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square root\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5)
        {
            printf("Enter 1st value: ");
            scanf("%f", &a);

            printf("Enter 2nd value: ");
            scanf("%f", &b);
        }

        if(choice == 1)
        {
            printf("Result = %.2f\n", a + b);
        }
        else if(choice == 2)
        {
            printf("Result = %.2f\n", a - b);
        }
        else if(choice == 3)
        {
            printf("Result = %.2f\n", a * b);
        }
        else if(choice == 4)
        {
            if(b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Cannot divide by zero.\n");
        }
        else if(choice == 5)
        {
            printf("Result = %.2f\n", pow(a, b));
        }
        else if(choice == 6)
        {
            printf("Enter value: ");
            scanf("%f", &a);

            if(a >= 0)
                printf("Result = %.2f\n", sqrt(a));
            else
                printf("Invalid value.\n");
        }
        else if(choice == 7)
        {
            printf("Calculator closed.\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while(choice != 7);

    return 0;
}