#include <stdio.h>
#include <string.h>

#define SIZE 100

char infixExpression[SIZE];
int stackTop = -1;

void push(char symbol) {
    stackTop = stackTop + 1;   
    infixExpression[stackTop] = symbol;
}

char pop() {
    char poppedItem;
    if (stackTop == -1) {
        printf("Stack is Empty \n");
        return 0;
    } else {
        poppedItem = infixExpression[stackTop];  
        stackTop = stackTop - 1;
    }
    return poppedItem;
}

int getPrecedence(char operator) {
    if (operator == '/' || operator == '*')
        return 3;
    if (operator == '+' || operator == '-')
        return 2;
    return 1;
}

void infixToPostfix(char infix[]) {
    int length;
    static int currentIndex = 0, postfixIndex = 0;
    char currentSymbol, poppedSymbol;
    char postfixExpression[SIZE];

    length = strlen(infix);

    while (currentIndex < length) {
        currentSymbol = infix[currentIndex];

        switch (currentSymbol) {
            case '(':
                push(currentSymbol);
                break;
            case ')':
                poppedSymbol = pop();
                while (poppedSymbol != '(') {
                    postfixExpression[postfixIndex] = poppedSymbol;
                    postfixIndex = postfixIndex + 1;
                    poppedSymbol = pop();
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
                while (getPrecedence(infixExpression[stackTop]) >= getPrecedence(currentSymbol)) {
                    poppedSymbol = pop();
                    postfixExpression[postfixIndex] = poppedSymbol;
                    postfixIndex++;
                }
                push(currentSymbol);
                break;
            default:
                postfixExpression[postfixIndex++] = currentSymbol;
                break;
        }
        currentIndex = currentIndex + 1;
    }

    while (stackTop > -1) {
        poppedSymbol = pop();
        postfixExpression[postfixIndex++] = poppedSymbol;
    }

    postfixExpression[postfixIndex++] = '\0';
    printf("Postfix Expression: %s",postfixExpression);
}

int main(void) {
    char infixExpressionInput[SIZE];
    printf("Enter the infix expression: ");
    gets(infixExpressionInput);
    infixToPostfix(infixExpressionInput);
    return 0;
}
