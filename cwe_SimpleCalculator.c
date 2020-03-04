# include <stdio.h>

int main() {

    char operator;
    double firstNumber,secondNumber;

    printf("Enter first operands: ");
    scanf("%lf",&firstNumber);

    printf("Enter an operator (+, -, *,): ");
    scanf("%*c%c", &operator);

    printf("Enter second operands: ");
    scanf("%lf",&secondNumber);


    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber+secondNumber);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber-secondNumber);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber*secondNumber);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber/firstNumber);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    printf("\n");
    
    return 0;
}

