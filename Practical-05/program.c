#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int parcelID)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow! No space for new parcels.\n");
        return;
    }

    stack[++top] = parcelID;
    printf("Parcel inserted successfully.\n");
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow! No parcels available.\n");
        return;
    }

    printf("Removed parcel ID: %d\n", stack[top--]);
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("No parcels in the stack.\n");
        return;
    }

    printf("Parcels in stack (top to bottom):\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice, parcelID;

    do
    {
        printf("\n--- PARCEL STACK MENU ---\n");
        printf("1. Push Parcel\n");
        printf("2. Pop Parcel\n");
        printf("3. Display Parcels\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter parcel ID: ");
            scanf("%d", &parcelID);
            push(parcelID);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
