#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_full(void);
bool is_empty(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {
    char ch, op1, op2;

    while (true) {
        printf("Enter an RPN expression: ");

        while ((ch = getchar()) != '\n') {
            if (isdigit(ch))
                // ch is a digit but is a string.
                // We subtract the ASCII value of '0' with the ASCII value of the digit string.
                push(ch - '0');
            else
                switch (ch) {
                case '+':
                    push(pop() + pop());
                    break;
                case '-':
                    op2 = pop();
                    op1 = pop();
                    push(op1 - op2);
                    break;
                case '*':
                    push(pop() * pop());
                    break;
                case '/':
                    op2 = pop();
                    op1 = pop();
                    push(op1 / op2);
                    break;
                case '=':
                    printf("Value of expression: %d\n", pop());
                    break;
                case ' ':
                    break;
                default:
                    exit(EXIT_FAILURE);
                }
        }
    }
}

void make_empty(void) { top = 0; }

bool is_full(void) { return top == STACK_SIZE; }

bool is_empty(void) { return top == 0; }

void push(int i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void) {
    printf("\nStack overflow\n");
    printf("Expression is too complex.\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nStack underflow\n");
    printf("Not enough operands in expression.\n");
    exit(EXIT_FAILURE);
}
