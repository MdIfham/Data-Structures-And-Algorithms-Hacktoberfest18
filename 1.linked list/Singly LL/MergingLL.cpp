#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;

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

void create2(int a[], int n)
{
    int i;
    struct Node *p, *last;
    second = new Node;
    second->data = a[0];
    second->next = NULL;
    last = second;

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

void Merge(Node *p, Node *q)
{
    Node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }

    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    if (q)
        last->next = q;
}


int main()
{
    int a1[] = {1, 20, 25, 30, 45};
    int a2[] = {2, 10, 15, 40, 50};
    create(a1, 5);
    create2(a2, 5);
    printf("\nDisplay by Iteration\n");
    display(first);
    printf("\nDisplay by Iteration\n");
    display(second);
    
    Merge(first, second);
    printf("\nDisplay by Iteration\n");
    display(third);
    

    return 0;
}
