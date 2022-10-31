#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

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

int count(struct Node *p)
{  int c=0;
    while (p != NULL)
    {   c++;
        p = p->next;
    }
    return c;
}

void Reverse1(Node *p)
{
    int *a=new int(count(p));
    Node *q=p;
    int i=0;
    while(q!=NULL)
    {
        a[i]=q->data;
        q=q->next;
        i++;
    }
     q=p;
     i--;
    while(q!=NULL)
    {
        q->data=a[i];
        q=q->next;
        i--;
    } 
}


void Reverse2(Node *p)
{
    Node *q=NULL, *r=NULL;
    int i=0;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void Reverse3(Node *q, Node *p)
{
    if(p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
         first=q;
}

int main()
{
    int arr[] = {1, 3, 4, 4, 5, 5, 7};
    create(arr, 7);
    printf("\nDisplay by Iteration\n");    display(first);

    Reverse1(first);
    printf("\nDisplay after reversing elements\n");    display(first);

    Reverse2(first);
    printf("\nDisplay after reversing links\n");    display(first);

    Reverse3(NULL, first);
    printf("\nDisplay after reversing links through recursion\n");    display(first);
  
    return 0;
}
