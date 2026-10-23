#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

struct Node
{
    char name[SIZE];
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(char name[])
{
    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    strcpy(newNode->name, name);
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node *insert(struct Node *root, char name[])
{
    if (root == NULL)
        return createNode(name);

    int result = strcmp(name, root->name);

    if (result < 0)
        root->left = insert(root->left, name);
    else if (result > 0)
        root->right = insert(root->right, name);
    else
        printf("Duplicate name ignored: %s\n", name);

    return root;
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%s ", root->name);
        inorder(root->right);
    }
}

void preorder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%s ", root->name);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%s ", root->name);
    }
}

struct Node *search(struct Node *root, char name[])
{
    if (root == NULL || strcmp(name, root->name) == 0)
        return root;

    if (strcmp(name, root->name) < 0)
        return search(root->left, name);

    return search(root->right, name);
}

void freeTree(struct Node *root)
{
    if (root != NULL)
    {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main()
{
    struct Node *root = NULL;
    struct Node *found;
    char name[SIZE];
    int n, i;

    printf("Enter number of names: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid number of names.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%49s", name);
        root = insert(root, name);
    }

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    printf("\n\nEnter name to search: ");
    scanf("%49s", name);

    found = search(root, name);

    if (found != NULL)
        printf("%s found in the directory.\n", name);
    else
        printf("%s not found in the directory.\n", name);

    freeTree(root);

    return 0;
}
