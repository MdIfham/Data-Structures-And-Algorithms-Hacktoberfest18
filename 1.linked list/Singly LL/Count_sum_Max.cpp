#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>

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

int countR(struct Node *p)
{   if (p == NULL)
       return 0;
    else
       return count(p->next)+1;
}

int add(struct Node *p)
{  int sum=0;
    while (p != NULL)
    {   sum = sum+ p->data;
        p=p->next;
    }
    return sum;
}

int addR(struct Node *p)
{   if (p == NULL)
       return 0;
    else
       return addR(p->next)+p->data;
}

int max(struct Node *p)
{    int m=INT_MIN;
    while(p)
    {      if(p->data > m)  m=p->data;
                   p=p->next;
    } 
    return m;
}

int maxR(struct Node *p)
{    int x=0;
     if(p==0)
       return INT_MIN;
    else{
        x=maxR(p->next);
        if(x > p->data)
          return x;
        else 
          return p->data;  
    }
}

int main()
{
    int arr[] = {1, 78, 3, 4, 5};
    create(arr, 5);
    printf("\nDisplay by Iteration\n");    display(first);
    printf("\nCount of nodes by Iteration: %d",count(first));    
    printf("\nCount of nodes by Recursion: %d",countR(first));    
    
    printf("\nAddition by Iteration: %d", add(first));   
    printf("\nAddition by Recursion: %d", addR(first));   

     printf("\nMaximum by Iteration: %d", max(first));   
     printf("\nMaximum by Recursion: %d", maxR(first));   

    return 0;
}
