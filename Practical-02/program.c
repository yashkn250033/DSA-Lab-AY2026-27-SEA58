#include <stdio.h>
#include <string.h>

#define MAX 100
#define SUBJECTS 3

struct Student
{
    int roll;
    char name[50];
    char program[30];
    char course[30];
    float marks[SUBJECTS];
    float total;
    float average;
};

struct Student s[MAX];
int count = 0;

void calculate(int i)
{
    int j;
    s[i].total = 0;

    for (j = 0; j < SUBJECTS; j++)
        s[i].total += s[i].marks[j];

    s[i].average = s[i].total / SUBJECTS;
}

int search(int roll)
{
    int i;

    for (i = 0; i < count; i++)
        if (s[i].roll == roll)
            return i;

    return -1;
}

void addStudent()
{
    int i, j;

    if (count == MAX)
    {
        printf("Database is full!\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &s[count].roll);

    if (search(s[count].roll) != -1)
    {
        printf("Roll number already exists!\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %49[^\n]", s[count].name);

    printf("Enter program: ");
    scanf(" %29s", s[count].program);

    printf("Enter course: ");
    scanf(" %29s", s[count].course);

    printf("Enter marks in %d subjects: ", SUBJECTS);

    for (j = 0; j < SUBJECTS; j++)
        scanf("%f", &s[count].marks[j]);

    calculate(count);
    count++;

    printf("Student added successfully.\n");
}

void display()
{
    int i, j;

    if (count == 0)
    {
        printf("No student records available.\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Program: %s\n", s[i].program);
        printf("Course: %s\n", s[i].course);

        printf("Marks: ");
        for (j = 0; j < SUBJECTS; j++)
            printf("%.2f ", s[i].marks[j]);

        printf("\nTotal: %.2f", s[i].total);
        printf("\nAverage: %.2f\n", s[i].average);
    }
}

void searchStudent()
{
    int roll, i;

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    i = search(roll);

    if (i == -1)
        printf("Student not found.\n");
    else
    {
        printf("Student Found: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Total: %.2f\n", s[i].total);
        printf("Average: %.2f\n", s[i].average);
    }
}

void sortStudents()
{
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (s[j].total < s[j + 1].total)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Records sorted by total marks.\n");
    display();
}

void modifyStudent()
{
    int roll, i, j;

    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    i = search(roll);

    if (i == -1)
    {
        printf("Student not found.\n");
        return;
    }

    printf("Enter new name: ");
    scanf(" %49[^\n]", s[i].name);

    printf("Enter new program: ");
    scanf(" %29s", s[i].program);

    printf("Enter new course: ");
    scanf(" %29s", s[i].course);

    printf("Enter new marks: ");

    for (j = 0; j < SUBJECTS; j++)
        scanf("%f", &s[i].marks[j]);

    calculate(i);

    printf("Record modified successfully.\n");
}

int main()
{
    int choice, i, n;

    printf("Enter initial number of students: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX)
    {
        printf("Invalid number of students.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        addStudent();
    }

    do
    {
        printf("\n--- STUDENT DATABASE MENU ---\n");
        printf("1. Display Students\n");
        printf("2. Search Student\n");
        printf("3. Sort by Total Marks\n");
        printf("4. Modify Student\n");
        printf("5. Append Student\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            display();
            break;

        case 2:
            searchStudent();
            break;

        case 3:
            sortStudents();
            break;

        case 4:
            modifyStudent();
            break;

        case 5:
            addStudent();
            break;

        case 6:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}
