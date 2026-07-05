#include <stdio.h>
#include "calculator.h"

int main()
{
    int choice;
    double num1, num2;

    while (1)
    {
        printf("\n==============================");
        printf("\n        C CALCULATOR");
        printf("\n==============================");

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Power");
        printf("\n6. Square Root");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf",&num1,&num2);

                printf("Result = %.2lf\n", add(num1,num2));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf",&num1,&num2);

                printf("Result = %.2lf\n", subtract(num1,num2));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf",&num1,&num2);

                printf("Result = %.2lf\n", multiply(num1,num2));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf",&num1,&num2);

                printf("Result = %.2lf\n", divide(num1,num2));
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf",&num1,&num2);

                printf("Result = %.2lf\n", power(num1,num2));
                break;

            case 6:
                printf("Enter number: ");
                scanf("%lf",&num1);

                printf("Result = %.2lf\n", squareRoot(num1));
                break;

            case 7:
                printf("\nGoodbye!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}
