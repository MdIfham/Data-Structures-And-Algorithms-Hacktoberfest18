#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int a[], int n)
{
    int i;
    struct Node *p, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; ++i)
    {
        p = (struct Node *)malloc(sizeof(struct Node *));
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void displayTR(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        displayTR(p->next);
    }
}

void displayHR(struct Node *p)
{
    if (p != NULL)
    {   
        displayHR(p->next);
        printf("%d ", p->data);
    }
}

int main()
{
    int arr[] = {1, 78, 3, 4, 5};
    create(arr, 5);
    printf("\nDisplay by Iteration\n");    display(first);
   printf("\nDisplay by Tail Recursion\n");    displayTR(first);
   printf("\nDisplay by Head Recursion\n");    displayHR(first);
    return 0;
}
