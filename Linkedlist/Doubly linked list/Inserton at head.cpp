
#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* nxt;
    node * prv;

};

class DoublyLinkedList{
public:
    node *head;
    int sz;
    DoublyLinkedList() // constructor function
    {
        head = NULL;
        sz = 0;
    }
    node* CreateNewNode(int data) // create a new node with the given data and return it.
    {
        node* newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void InsetAtHead(int data) // inserts a node with given data at head
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    void Traverse()
    {
        node *a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a= a->nxt;
        }
        cout<<"\n";
    }
    int GetSize()
    {
        return sz;
    }

};

int main()
{
    DoublyLinkedList dl;
    dl.InsetAtHead(10);
    dl.InsetAtHead(5);
    dl.InsetAtHead(1);
    dl.InsetAtHead(10);
    dl.Traverse();
    cout<<dl.GetSize()<<endl;


    return 0;
}
