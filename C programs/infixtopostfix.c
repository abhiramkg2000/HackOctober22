#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

int priority(char ch)
{
    if (ch == '(')
        return 0;
    if (ch == '+' || ch == '-')
        return 1;
    if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    if (ch == '^')
        return 3;
}

int main()
{
    char infix[MAX], postfix[MAX], ch;
    int i = 0, j = 0;
    printf("Enter the infix expression:");
    gets(infix);
    while ((ch = infix[i++]) != '\0')
    {
        if (ch == '(')
            push(ch);
        else if (isalnum(ch))
            postfix[j++] = ch;
        else if (ch == ')')
        {
            while (stack[top] != '(')
                postfix[j++] = pop();
            pop();
        }
        else
        {
            while (priority(stack[top]) >= priority(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }
    while (top != -1)
        postfix[j++] = pop();
    postfix[j] = '\0';
    printf("The postfix expression is:");
    puts(postfix);
    return 0;
}

// OUTPUT

// Enter the infix expression:a+b*c
// The postfix expression is:abc*+

// Enter the infix expression:a+b*(c^d-e)^(f+g*h)-i
// The postfix expression is:abcd^e-fgh*+^*+i-

// Enter the infix expression:(a+b)*c-(d-e)*(f+g)
// The postfix expression is:ab+c*de-fg+*-

// Enter the infix expression:a+b*c-d/e
// The postfix expression is:abc*+de/