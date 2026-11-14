#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* ---------- STACK ADT DEFINITION ---------- */
struct Stack {
    int top;
    int size;
    int *S;
};

/* ---------- STACK OPERATIONS ---------- */
void create(struct Stack *st, int size) {
    st->size = size;
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}

void push(struct Stack *st, int x) {
    if (st->top == st->size - 1)
        printf("Stack Overflow\n");
    else
        st->S[++st->top] = x;
}

int pop(struct Stack *st) {
    int x = -1;
    if (st->top == -1)
        printf("Stack Underflow\n");
    else
        x = st->S[st->top--];
    return x;5
}

int stackTop(struct Stack st) {
    if (st.top == -1)
        return -1;
    return st.S[st.top];
}

int isEmpty(struct Stack st) {
    return st.top == -1;
}

/* ---------- OPERATOR PRECEDENCE ---------- */
int precedence(char x) {
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '^')
        return 3;
    return 0;
}

/* ---------- INFIX TO POSTFIX ---------- */
char *infixToPostfix(char *infix) {
    struct Stack st;
    create(&st, strlen(infix));

    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0, j = 0;

    for (i = 0; infix[i] != '\0'; i++) {

        /* If operand, add directly to postfix */
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }

        /* If opening parenthesis, push to stack */
        else if (infix[i] == '(') {
            push(&st, infix[i]);
        }

        /* If closing parenthesis, pop until '(' */
        else if (infix[i] == ')') {
            while (!isEmpty(st) && stackTop(st) != '(') {
                postfix[j++] = pop(&st);
            }
            pop(&st);   // Remove '(' from stack
        }

        /* If operator */
        else {
            while (!isEmpty(st) &&
                   precedence(infix[i]) <= precedence(stackTop(st))) {
                postfix[j++] = pop(&st);
            }
            push(&st, infix[i]);
        }
    }

    while (!isEmpty(st))
        postfix[j++] = pop(&st);

    postfix[j] = '\0';
    return postfix;
}

/* ---------- POSTFIX EVALUATION ---------- */
int evaluatePostfix(char *postfix) {
    struct Stack st;
    create(&st, strlen(postfix));

    int i, x1, x2, result;

    for (i = 0; postfix[i] != '\0'; i++) {

        if (isdigit(postfix[i])) {
            push(&st, postfix[i] - '0');   // Push the digit (conversion)
        }
        else {
            x2 = pop(&st);   // Pop the second operand
            x1 = pop(&st);   // Pop the first operand

            switch (postfix[i]) {
                case '+': result = x1 + x2; break;
                case '-': result = x1 - x2; break;
                case '*': result = x1 * x2; break;
                case '/': result = x1 / x2; break;
                case '^': result = pow(x1, x2); break;
            }

            push(&st, result);   // Push result onto the stack
        }
    }
    return pop(&st);
}

/* ---------- MAIN FUNCTION ---------- */
int main() {
    char infix[50];
    char *postfix;
    int value;

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    postfix = infixToPostfix(infix);
    printf("Postfix Expression: %s\n", postfix);

    value = evaluatePostfix(postfix);
    printf("Evaluated Value: %d\n", value);

    free(postfix);
    return 0;
}
