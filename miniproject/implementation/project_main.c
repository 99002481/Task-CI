#include <smart_calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;


/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Smart_Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5.prime number\n6. even or odd\n7.Factorial\n8. positive\n9. negative\n10.zero\n11. square area\n12. square perimeter\n13. reactangle area\n14. rectangle perimeter\n15. circle area\n16. circle perimeter\n17. remainder\n18.  Exit");
    printf("\n\tEnter your choice\n");

     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(18 == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;

    }
    switch(calculator_operation)
    {
        case 1:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 2:
            printf("\n\t%d - %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 3:
            printf("\n\t%d * %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 4:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 5:
            printf("\n\t %d \nEnter to continue",
            prime(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 6:
            printf("\n\t %d \nEnter to continue",
            evenodd(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 7:
            printf("\n\t %d \nEnter to continue",
            factorial(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 8:
            printf("\n\t %d \nEnter to continue",
            positive(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 9:
            printf("\n\t %d \nEnter to continue",
            negative(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 10:
            printf("\n\t %d \nEnter to continue",
            zero(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 11:
            printf("\n\t %d \nEnter to continue",
            square_area(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 12:
            printf("\n\t %d \nEnter to continue",
            square_per(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 13:
            printf("\n\t %d \nEnter to continue",
            rectangle_area(calculator_operand1,calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 14:
            printf("\n\t %d \nEnter to continue",
            rectangle_per(calculator_operand1,calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 15:
            printf("\n\t %d \nEnter to continue",
            circle_area(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 16:
            printf("\n\t %d \nEnter to continue",
            circle_per(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 17:
            printf("\n\t %d \nEnter to continue",
            rem(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 18:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((1 <= operation) && (18 >= operation)) ? VALID: INVALID;
}
