


#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* nxt;
    node * prv;

};

class DoublyLinkedList
{
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
    void Insert(int index, int data) // insert at any index
    {
        if(index == 0)
        {
            InsetAtHead(data);
            return;
        }
        node*a = head;
        int cur_index =0;
        while( cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index -1
        node * newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;



    }
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        node *a = head;
        node *b = head -> nxt;
        delete a;
        if(b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }

    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index <<" does not exist "<<endl;
            return ;
        }
        node *a = head;
        int cur_index =0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node* b = a->prv;
        node*c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;

        }
        if(c!= NULL)
        {
            c->prv =b;
        }
        delete a;
        if(index ==0)
        {
            head = c;
        }
        sz--;
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
    void Reverse()
    {
        if(head == NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a;
        node *b = head;
        while(b!=NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
};
class Stack
{
    public:
    DoublyLinkedList dl;

    Stack()
    {

    }

    int top()
    {
        if(dl.GetSize()== 0)
        {
            cout<<"Stack is Empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    void push(int val)
    {
        dl.InsetAtHead(val);
    }
    void pop()
    {
        if(dl.GetSize()==0)
        {
            cout<<"Stack is empty\n";
            return;
        }
        dl.DeleteAtHead();
    }

};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(5);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    return 0;
}

