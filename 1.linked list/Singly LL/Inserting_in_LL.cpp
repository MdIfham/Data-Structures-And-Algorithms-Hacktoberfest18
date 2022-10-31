#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *last=NULL, *l=NULL, *f=NULL;

void create(int a[], int n)
{
    int i;
    struct Node *p;
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

int count(struct Node *p)
{  int c=0;
    while (p != NULL)
    {   c++;
        p = p->next;
    }
    return c;
}

void insert(struct Node *p, int pos, int x)
{    
    if(pos<0 || pos> count(p))
    return;

    struct Node *t = (struct Node*)malloc(sizeof(struct Node*));
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
    int arr[] = {1, 78, 3, 4, 5, 69, 89, 87, 84, 88};
    create(arr, 10);
    printf("\nDisplay by Iteration\n");
    display(first);
    insert(first,0,499);
    printf("\nDisplay after Insertion\n");
    display(first);
    insert(first, 18, 50);
    printf("\nDisplay after Insertion\n");
    display(first);

    InsertLast(first,45);
    printf("\nDisplay after Insertion\n");
    display(first);
    InsertLast(first, 90);
    printf("\nDisplay after Insertion\n");
    display(first);


    return 0;
}
