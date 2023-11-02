



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
    int getSize()
    {
        return dl.getSize();
    }

};

int main()

//O(n^2)
{   Stack<int > st;
st.push(5);
st.push(2);
st.push(7);
st.push(8);
st.push(3);


    Stack<int> tmp;
   while(st.getSize() > 0)
   {
       int t = st.top();
       st.pop();
       while(tmp.getSize()>0)
       {
           if(tmp.top() < t)
           {
               break;
           }
           st.push(tmp.pop());
           tmp.pop();

       }
       tmp.push(t);
   }
   swap(st,tmp);

   while(st.getSize() > 0)
   {
       cout<<st.top()<<"\n";
       st.pop;
   }

    return 0;
}

