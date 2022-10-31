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
int isSorted(Node *p)
{
    int x= INT32_MIN;
    while(p!=NULL)
    {
        if(p->data<x) return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}

void RemoveDuplicates(Node *p)
{
    Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data != q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q=p->next;
        }
    }

}

int main()
{
    int arr[] = {1, 3, 4, 4, 5, 5, 7};
    create(arr, 7);
    printf("\nDisplay by Iteration\n");    display(first);
    if(isSorted(first))
    printf("LL is sorted\n");
    else
    printf("LL is unsorted\n");
    RemoveDuplicates(first);
    printf("\nDisplay by Iteration\n");    display(first);
    return 0;
}
