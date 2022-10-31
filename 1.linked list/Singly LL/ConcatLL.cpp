#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second=NULL, *third=NULL;

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
{  int c=0;
    while (p != NULL)
    {   c++;
        p = p->next;
    }
    return c;
}

void concat(Node *p, Node *q)
{   third=p;
    while(p->next !=NULL)
    { p=p->next;}
     p->next=q;
     q=NULL;
}

int main()
{
    int a1[]={1,2,3,4,5};   int a2[]={10,20,30,40,50};
    create(a1, 5);   create2(a2,5);
    printf("\nDisplay by Iteration\n");    display(first);
    printf("\nDisplay by Iteration\n");    display(second);

    concat(first, second);
    printf("\nDisplay after Concatination\n");    display(third);
  
  
    return 0;
}
