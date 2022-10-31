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

int count(struct Node *p)
{  int c=0;
    while (p != NULL)
    {   c++;
        p = p->next;
    }
    return c;
}

int Delete(Node *p, int index)
{
     Node *q=NULL;
     int x=-1;

     if(index<1 || index>count(p))
       return -1;
      if(index==1)
      {
          q=first;
          x=first->data;
          first=first->next;
          delete q;
          return x;
      }
      else
      {
          for(int i=1;i<index-1;i++)
          { p=p->next;}
            q=p->next;
            p->next=q->next;
            x=q->data;
            delete q;
            return x;
      }
}

int main()
{#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;
    if(front==NULL)
    cout<<"Queue is Empty\n";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
    return x; 
}

void display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<'\n';
}

    int arr[] = {1, 3, 4, 5, 7};
    create(arr, 5);
    printf("\nDisplay by Iteration\n");    display(first);
    Delete(first, 4);
    printf("\nDisplay by Iteration\n");    display(first);
      return 0;
}
