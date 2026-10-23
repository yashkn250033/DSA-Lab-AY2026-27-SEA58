#include <stdio.h>

#define MAX 100

int confirmed[MAX];
int waiting[MAX];
int seats, confirmedCount = 0;
int front = 0, rear = -1, waitingCount = 0;

int findConfirmed(int id)
{
    int i;

    for (i = 0; i < confirmedCount; i++)
    {
        if (confirmed[i] == id)
            return i;
    }

    return -1;
}

int isWaiting(int id)
{
    int i;

    for (i = 0; i < waitingCount; i++)
    {
        if (waiting[(front + i) % MAX] == id)
            return 1;
    }

    return 0;
}

void bookTicket()
{
    int id;

    printf("Enter passenger ID: ");
    scanf("%d", &id);

    if (findConfirmed(id) != -1 || isWaiting(id))
    {
        printf("Passenger already has a booking or is waiting.\n");
        return;
    }

    if (confirmedCount < seats)
    {
        confirmed[confirmedCount++] = id;
        printf("Ticket confirmed.\n");
    }
    else if (waitingCount < MAX)
    {
        rear = (rear + 1) % MAX;
        waiting[rear] = id;
        waitingCount++;
        printf("All seats occupied. Passenger added to waiting list.\n");
    }
    else
    {
        printf("Waiting list is full.\n");
    }
}

void cancelTicket()
{
    int id, pos, i;

    printf("Enter passenger ID to cancel: ");
    scanf("%d", &id);

    pos = findConfirmed(id);

    if (pos == -1)
    {
        printf("Confirmed booking not found.\n");
        return;
    }

    for (i = pos; i < confirmedCount - 1; i++)
        confirmed[i] = confirmed[i + 1];

    confirmedCount--;

    printf("Booking cancelled for passenger %d.\n", id);

    if (waitingCount > 0)
    {
        id = waiting[front];
        front = (front + 1) % MAX;
        waitingCount--;

        confirmed[confirmedCount++] = id;

        printf("Passenger %d promoted from waiting list to confirmed.\n",
               id);
    }
}

void displayBookings()
{
    int i;

    printf("Confirmed Passengers: ");

    if (confirmedCount == 0)
        printf("None");

    for (i = 0; i < confirmedCount; i++)
        printf("%d ", confirmed[i]);

    printf("\n");
}

void displayWaiting()
{
    int i;

    printf("Waiting List: ");

    if (waitingCount == 0)
        printf("Empty");

    for (i = 0; i < waitingCount; i++)
        printf("%d ", waiting[(front + i) % MAX]);

    printf("\n");
}

int main()
{
    int choice;

    printf("Enter maximum seats: ");
    scanf("%d", &seats);

    if (seats < 1 || seats > MAX)
    {
        printf("Invalid number of seats.\n");
        return 1;
    }

    do
    {
        printf("\n--- TRAIN TICKET BOOKING SYSTEM ---\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Bookings\n");
        printf("4. Display Waiting List\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bookTicket();
            break;

        case 2:
            cancelTicket();
            break;

        case 3:
            displayBookings();
            break;

        case 4:
            displayWaiting();
            break;

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}
