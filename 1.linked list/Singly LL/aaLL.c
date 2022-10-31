#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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
    printf("\n");
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

int count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int countR(struct Node *p)
{
    if (p == NULL)
        return 0;
    else
        return count(p->next) + 1;
}

int add(struct Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int addR(struct Node *p)
{
    if (p == NULL)
        return 0;
    else
        return addR(p->next) + p->data;
}

int max(struct Node *p)
{
    int m = INT_MIN;
    while (p)
    {
        if (p->data > m)
            m = p->data;
        p = p->next;
    }
    return m;
}

int maxR(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return INT_MIN;
    else
    {
        x = maxR(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;
    }
}

struct Node *Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

struct Node *SearchR(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;

    return Search(p->next, key);
}

struct Node *SearchIM(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

void insert(struct Node *p, int pos, int x)
{
    if (pos < 0 || pos > count(p))
        return;

    struct Node *t = (struct Node *)malloc(sizeof(struct Node *));
    t->data = x;
    if (pos == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
            p = p->next;
        if (p)
        {
            t->next = p->next;
            p->next = t;
        }
    }
}

int main()
{
    struct Node *temp;
    int arr[] = {1, 78, 3, 4, 5, 69, 89, 87, 84, 88};
    create(arr, 10);
    printf("\nDisplay by Iteration\n");
    display(first);
    printf("\nDisplay by Tail Recursion\n");
    displayTR(first);
    printf("\nDisplay by Head Recursion\n");
    displayHR(first);

    //Count_sum_Max
    printf("\nCount of nodes by Iteration: %d", count(first));
    printf("\nCount of nodes by Recursion: %d", countR(first));

    printf("\nAddition by Iteration: %d", add(first));
    printf("\nAddition by Recursion: %d", addR(first));

    printf("\nMaximum by Iteration: %d", max(first));
    printf("\nMaximum by Recursion: %d", maxR(first));

    temp = Search(first, 5);
    if (temp)
        printf("\nKey is found by Iteration: %d\n", temp->data);
    else
        printf("Key is not found by Iteration\n");

    temp = SearchR(first, 78);
    if (temp)
        printf("Key is found by Recursion: %d\n", temp->data);
    else
        printf("Key is not found by Recursion\n");

    temp = SearchIM(first, 25);
    if (temp)
        printf("Key is found by Iteration Improved: %d\n", temp->data);
    else
        printf("Key is not found by Iteration Improved\n");

    display(first);

    temp = SearchIM(first, 78);
    if (temp)
        printf("Key is found by Iteration Improved : %d\n", temp->data);
    else
        printf("Key is not found by Iteration Improved\n");

    display(first);

    insert(first, 5, 499);
    printf("\nDisplay after Insertion\n");
    display(first);
    insert(first, 11, 50);
    printf("\nDisplay after Insertion\n");
    display(first);
    return 0;
}
