#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *head = NULL;

void create(int A[], int n)
{
    int i;
    Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(Node *p)
{
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
}

void DisplayR(Node *p)
{
    static int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        printf("%d ", p->data);
        DisplayR(p->next);
    }
    flag = 0;
}

int count(Node *p)
{
    int len = 0;
    do
    {
        len++;
        p = p->next;
    } while (p != head);
    return len;
}

void Insert(Node *p, int index, int x)
{
    Node *t;
    if (index < 0 || index > count(p))
        return;
    if (index == 0)
    {
        t = new Node;
        t->data = x;
        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            while (p->next != head)
                p = p->next;
            p->next = t;
            t->next = head;
            head = t;
        }
    }

    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int Delete(Node *p, int index)
{  Node *q;
    if(index<0 || index>count(p))
    return -1;
    int x;

    if(index==1)
    {    
        while(p->next!=head)   
        p=p->next;
        x=head->data;
        if(head==p)
        {
            delete head;
            head=NULL;
        }
        else
        {
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else
    {
        for(int i=0;i<index-2;i++)
        p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
        delete q;
       
    }

    return x;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    create(a, 5);
    cout << "Number of elements in LL: " << count(head);
    cout << "\nDisplay Function by Iteration: ";
    Display(head);
    cout << "\nDisplay Function by Iteration:  ";
    DisplayR(head);
    Insert(head, 2, 25);
    Insert(head, 0, 5);
    cout<<"\nDisplay after Insertion: ";
    Display(head);
    cout<<endl<<Delete(head,3);
    cout<<Delete(head, 1);
    cout<<"\nDisplay after Deletion: ";
    Display(head);
    return 0;
}















































