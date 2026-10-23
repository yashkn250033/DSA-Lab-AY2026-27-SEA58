#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // A. Right-angle triangle using numbers
    printf("\nA. Right-angle triangle:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);

        printf("\n");
    }

    // B. Diamond shape using numbers
    printf("\nB. Diamond shape:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("%d ", i);

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("%d ", i);

        printf("\n");
    }

    // C. Pyramid using asterisks
    printf("\nC. Pyramid using asterisks:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    // D. Pyramid using alphabets
    printf("\nD. Pyramid using alphabets:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 0; j < i; j++)
            printf("%c ", 'A' + j);

        for (j = i - 2; j >= 0; j--)
            printf("%c ", 'A' + j);

        printf("\n");
    }

    return 0;
}
