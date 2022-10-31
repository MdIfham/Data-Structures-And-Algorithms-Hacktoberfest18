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
    printf("\n");
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
    if(key==p->data)
       return p;
        
    return Search(p->next,key);
}

struct Node *SearchIM(struct Node *p, int key)
{     struct Node *q=NULL;
    while (p != NULL)
    {
        if (key == p->data)
        {  q->next=p->next;
           p->next=first;
           first=p;       
           return p;}
        q=p; 
        p = p->next;
    }
    return NULL;
}

int main()
{   struct Node *temp;
    int arr[] = {1, 78, 3, 4, 5, 25, 12, 34};
    create(arr, 8);
    printf("\nDisplay by Iteration\n");
    display(first);
    temp=Search(first,5);
    if(temp)
      printf("Key is found: %d\n", temp->data);
    else 
      printf("Key is not found\n");

    temp=SearchR(first,78);
    if(temp)
      printf("Key is found: %d\n", temp->data);
    else 
      printf("Key is not found\n");

    temp=SearchIM(first,25);
    if(temp)
      printf("Key is found: %d\n", temp->data);
    else 
      printf("Key is not found\n");  

      display(first);

     temp=SearchIM(first,78);
    if(temp)
      printf("Key is found: %d\n", temp->data);
    else 
      printf("Key is not found\n");

       display(first);

    return 0;
}
