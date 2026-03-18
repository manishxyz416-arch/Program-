#include<stdio.h>
#include<conio.h>
int main() {
    float n1, n2, result;
    int choice;

    printf("==== Basic Arithmetic Operations ====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &n1);
    printf("Enter second number: ");
    scanf("%f", &n2);

    switch(choice) {
        case 1:
            result = n1 + n2;
            printf("Result: %.2f\n", result);
            break;

        case 2:
            result = n1 - n2;
            printf("Result: %.2f\n", result);
            break;

        case 3:
            result = n1 * n2;
            printf("Result: %.2f\n", result);
            break;

        case 4:
            if(n2 != 0) {
                result = n1 / n2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}
