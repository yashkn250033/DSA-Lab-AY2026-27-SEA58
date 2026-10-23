#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct Node
{
    char text[SIZE];
    struct Node *next;
};

struct Node *head = NULL;

struct Node *createNode(char text[])
{
    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    strcpy(newNode->text, text);
    newNode->next = NULL;

    return newNode;
}

void insertFront(char text[])
{
    struct Node *newNode = createNode(text);

    newNode->next = head;
    head = newNode;

    printf("Line inserted successfully.\n");
}

void insertEnd(char text[])
{
    struct Node *newNode = createNode(text);
    struct Node *temp = head;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    printf("Line inserted successfully.\n");
}

void insertPosition(char text[], int pos)
{
    int i;
    struct Node *temp = head;
    struct Node *newNode;

    if (pos < 1)
    {
        printf("Invalid position.\n");
        return;
    }

    if (pos == 1)
    {
        insertFront(text);
        return;
    }

    for (i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Invalid position.\n");
        return;
    }

    newNode = createNode(text);
    newNode->next = temp->next;
    temp->next = newNode;

    printf("Line inserted successfully.\n");
}

void deleteFront()
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    head = head->next;

    free(temp);

    printf("First line deleted successfully.\n");
}

void deleteEnd()
{
    struct Node *temp = head;
    struct Node *prev = NULL;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Last line deleted successfully.\n");
        return;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);

    printf("Last line deleted successfully.\n");
}

void deletePosition(int pos)
{
    int i;
    struct Node *temp = head;
    struct Node *del;

    if (pos < 1 || head == NULL)
    {
        printf("Invalid position or empty list.\n");
        return;
    }

    if (pos == 1)
    {
        deleteFront();
        return;
    }

    for (i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
    {
        printf("Invalid position.\n");
        return;
    }

    del = temp->next;
    temp->next = del->next;
    free(del);

    printf("Line deleted successfully.\n");
}

void display()
{
    struct Node *temp = head;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("List: ");

    while (temp != NULL)
    {
        printf("%s", temp->text);

        if (temp->next != NULL)
            printf(" -> ");

        temp = temp->next;
    }

    printf("\n");
}

void displayReverse(struct Node *node)
{
    if (node == NULL)
        return;

    displayReverse(node->next);
    printf("%s", node->text);

    if (node != head)
        printf(" -> ");
}

void reverseList()
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    printf("List reversed successfully.\n");
}

void freeList()
{
    struct Node *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    int choice, pos;
    char text[SIZE];

    do
    {
        printf("\n--- SINGLY LINKED LIST MENU ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Front\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Position\n");
        printf("7. Display List\n");
        printf("8. Display in Reverse\n");
        printf("9. Reverse List\n");
        printf("10. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            freeList();
            return 1;
        }

        getchar();

        switch (choice)
        {
            case 1:
            case 2:
            case 3:
                printf("Enter text line: ");

                if (fgets(text, SIZE, stdin) == NULL)
                    break;

                text[strcspn(text, "\n")] = '\0';

                if (choice == 1)
                    insertFront(text);
                else if (choice == 2)
                    insertEnd(text);
                else
                {
                    printf("Enter position: ");
                    scanf("%d", &pos);
                    getchar();
                    insertPosition(text, pos);
                }
                break;

            case 4:
                deleteFront();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                getchar();
                deletePosition(pos);
                break;

            case 7:
                display();
                break;

            case 8:
                if (head == NULL)
                    printf("List is empty.\n");
                else
                {
                    printf("List in Reverse Order: ");
                    displayReverse(head);
                    printf("\n");
                }
                break;

            case 9:
                reverseList();
                break;

            case 10:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 10);

    freeList();

    return 0;
}
