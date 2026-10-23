#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];

int n;
int front, rear;

void BFS(int start)
{
    int i, current;

    for (i = 0; i < n; i++)
        visited[i] = 0;

    front = 0;
    rear = -1;

    visited[start] = 1;
    queue[++rear] = start;

    printf("BFS Traversal: ");

    while (front <= rear)
    {
        current = queue[front++];
        printf("%d ", current);

        for (i = 0; i < n; i++)
        {
            if (graph[current][i] == 1 &&
                visited[i] == 0)
            {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }

    printf("\n");
}

void DFS(int vertex)
{
    int i;

    visited[vertex] = 1;
    printf("%d ", vertex);

    for (i = 0; i < n; i++)
    {
        if (graph[vertex][i] == 1 &&
            visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of buildings: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Invalid number of buildings.\n");
        return 1;
    }

    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    }

    printf("Enter starting building (0 to %d): ", n - 1);
    scanf("%d", &start);

    if (start < 0 || start >= n)
    {
        printf("Invalid starting building.\n");
        return 1;
    }

    BFS(start);

    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS Traversal: ");
    DFS(start);
    printf("\n");

    return 0;
}
