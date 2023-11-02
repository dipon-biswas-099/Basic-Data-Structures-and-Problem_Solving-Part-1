


#include<bits/stdc++.h>
using namespace std;
template<class T>
class node
{
public:
    T data;
    node* nxt;
    node * prv;

};

template<class T>
class DoublyLinkedList
{
public:
    node <T>*head;
    int sz;
    DoublyLinkedList() // constructor function
    {
        head = NULL;
        sz = 0;
    }
    node<T> *CreateNewNode(T data) // create a new node with the given data and return it.
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void InsertAtHead(T data) // inserts a node with given data at head
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head -> nxt;
        delete a;
        if(b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }




    int GetSize()
    {
        return sz;
    }

};
template<class T>
class Stack
{
    public:
    DoublyLinkedList<T> dl;

    Stack()
    {

    }

    T top()
    {
        if(dl.GetSize()== 0)
        {
            cout<<"Stack is Empty!\n";
           T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T val)
    {
        dl.InsertAtHead(val);
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
    Stack<double> st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    st.pop();

   // st.top();

    Stack<char > st2;
    st2.push('a');
    st2.push('g');
    st2.push('u');

  cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();

    cout<<st2.top()<<endl;
    st2.pop();

    return 0;
}

