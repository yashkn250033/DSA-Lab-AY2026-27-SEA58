#include <stdio.h>
#include <string.h>

#define MAX 100
#define LEN 50

int sequentialSearch(char names[][LEN], int n, char key[])
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (strcmp(names[i], key) == 0)
            return i;
    }

    return -1;
}

int binarySearch(char names[][LEN], int n, char key[])
{
    int low = 0, high = n - 1, mid, result;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        result = strcmp(names[mid], key);

        if (result == 0)
            return mid;
        else if (result < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    char names[MAX][LEN], key[LEN], temp[LEN];
    int n, i, j, pos;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX)
    {
        printf("Invalid number of contacts.\n");
        return 1;
    }

    if (n == 0)
    {
        printf("No contacts available.\n");
        return 0;
    }

    printf("Enter contact names:\n");

    for (i = 0; i < n; i++)
        scanf("%49s", names[i]);

    printf("Enter name to search: ");
    scanf("%49s", key);

    // Sequential Search
    pos = sequentialSearch(names, n, key);

    printf("\nSequential Search:\n");

    if (pos != -1)
        printf("Contact %s found at position %d.\n",
               key, pos + 1);
    else
        printf("Contact not found.\n");

    // Sort names alphabetically using Bubble Sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Binary Search
    pos = binarySearch(names, n, key);

    printf("\nBinary Search:\n");

    if (pos != -1)
        printf("Contact %s found at position %d "
               "in the sorted list.\n",
               key, pos + 1);
    else
        printf("Contact not found.\n");

    return 0;
}
