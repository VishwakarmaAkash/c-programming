#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
    int size;
    int top;
    char *S;
};

/* Create Stack */
void create(struct Stack *st) {
    st->size = 100;
    st->top = -1;
    st->S = (char *)malloc(st->size * sizeof(char));
}

/* Push Operation */
void push(struct Stack *st, char x) {
    if (st->top == st->size - 1) {
        printf("Stack Overflow\n");
    } else {
        st->top++;
        st->S[st->top] = x;
    }
}

/* Pop Operation */
char pop(struct Stack *st) {
    char x = '\0';

    if (st->top == -1) {
        printf("Stack Underflow\n");
    } else {
        x = st->S[st->top];
        st->top--;
    }

    return x;
}

/* Check if Stack is Empty */
int isEmpty(struct Stack st) {
    if (st.top == -1)
        return 1;
    else
        return 0;
}

/* Parenthesis Matching Function */
int isBalanced(char *exp) {
    struct Stack st;
    create(&st);

    for (int i = 0; exp[i] != '\0'; i++) {

        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(&st, exp[i]);
        }

        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {

            if (isEmpty(st))
                return 0;

            char popped = pop(&st);

            if ((exp[i] == ')' && popped != '(') ||
                (exp[i] == '}' && popped != '{') ||
                (exp[i] == ']' && popped != '[')) {
                return 0;
            }
        }
    }

    return isEmpty(st);
}

/* Main Function */
int main() {
    char exp[100];

    printf("Enter an expression: ");
    scanf("%s", exp);

    if (isBalanced(exp))
        printf("Parentheses are BALANCED\n");
    else
        printf("Parentheses are NOT BALANCED\n");

    return 0;
}
