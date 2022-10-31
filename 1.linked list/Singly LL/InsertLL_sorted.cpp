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

//new linked list starting from empty list
void SortedInsert(struct Node *p, int x)
{    
    Node *t,*q=NULL;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if(first==NULL)
    { first = t;    }

    else{
          while(p && p->data<x)
          {   q=p;
              p=p->next;          }

          if(p==first)
          {
              t->next = first;
              first = t;
          }    
          else
          {
              t->next = q->next;
              q->next = t;
          }
    }
}


int main()
{
    int arr[] = {1, 3, 4, 5, 10, 69, 70, 87, 88, 100};
    create(arr, 10);
    printf("\nDisplay by Iteration\n");
    display(first);
   
    SortedInsert(first,45);
    printf("\nDisplay after Insertion\n");
    display(first);
    SortedInsert(first, 90);
    printf("\nDisplay after Insertion\n");
    display(first);


    return 0;
}
