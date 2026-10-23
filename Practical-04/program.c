#include <stdio.h>

#define MAX 64

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top < MAX - 1)
        stack[++top] = value;
}

int pop()
{
    if (top >= 0)
        return stack[top--];

    return -1;
}

int main()
{
    unsigned int num, temp;

    printf("Enter a decimal number: ");
    scanf("%u", &num);

    temp = num;

    if (temp == 0)
    {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    while (temp > 0)
    {
        push(temp % 2);
        temp = temp / 2;
    }

    printf("Binary equivalent: ");

    while (top != -1)
    {
        printf("%d", pop());
    }

    printf("\n");

    return 0;
}
