#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
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

int isLoop(Node *f)
{
    Node *p, *q;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : NULL;
    } while (p && q && p != q);

    if (p == q)
        return true;
    else
        return false;
}

int main()
{
    Node *t1, *t2;
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
  
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    
    
    if (isLoop(first))
        cout << "Loop Present";
    else
        cout << "Linear Linked List";

    return 0;
}