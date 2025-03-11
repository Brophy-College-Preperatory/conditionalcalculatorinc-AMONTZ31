#include <stdio.h>


int getEvenNumber();
void performOperation(int num1, int num2, char operation);

int main() {
    int num;
    int evenNum;
    char operation;

    
    printf("Enter a number between one and ten: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (num < 1 || num > 10) {
        printf("Invalid number. Enter a number between 1 and 10.\n");
        return 1;
    }

    
    evenNum = getEvenNumber();

   
    printf("\nChoose an operation:\n");
    printf("m for multiplication\n");
    printf("a for addition\n");
    printf("s for subtraction\n");
    printf("d for division\n");
    printf("Your choice: ");
    scanf(" %c", &operation);

    
    performOperation(num, evenNum, operation);

    return 0;
}


int getEvenNumber() {
    int num;
    while (1) {
        printf("Enter an even number: ");
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }
        if (num % 2 == 0) {
            return num; 
        }
        printf("That is not an even number. Try again.\n");
    }
}

void performOperation(int num1, int num2, char operation) {
    switch (operation) {
        case 'm':
            printf("Your choice is m\n");
            printf("Product: %d\n", num1 * num2);
    }
}