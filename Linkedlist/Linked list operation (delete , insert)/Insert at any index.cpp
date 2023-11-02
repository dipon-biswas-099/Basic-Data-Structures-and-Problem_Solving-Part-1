#include<bits/stdc++.h>
using namespace std;

class node{

public:
    int data;
    //int sz;
    node * nxt;

};

class LinkedList{
public:
    node * head;
    int sz;

    LinkedList()
    {
        head = NULL;
        sz=0;
    }
    //create a new node with data = value and nxt = NULL;
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void insertAtHead( int value )
    {   // Insert new value at head
        sz++;
       node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        // if head is not null
        a->nxt = head;
        head = a;
    }

    void Traverse()
    {// Prints the linked list
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }

    int SearchDistinctValue( int value)
    {// search for single value
         node* a = head;
         int index = 0;
        while(a!= NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a= a->nxt;
            index++;
        }
        return -1;
    }

    void SearchAllValue(int value)
    {// Search All possible occurrence

        node* a = head;
         int index = 0;
        while(a!= NULL)
        {
            if(a->data == value)
            {
                cout<<"Value is founded at index :"<<index;
            }
            a= a->nxt;
            index++;
        }

    }
    int getSize()
    {
        // O(1)
        return sz;
        //O(size of n )= O(n)
        /*
        int sz =0;
        node *a = head;
        while(a!=NULL)
        {
            sz++;
            a =a->nxt;
        }
        return sz;*/
    }


    void InsertAtAnyIndex(int index , int value)
    {
        if(index <0 || index > sz)
        {
            return ;
        }
        if(index == 0)
        {
            insertAtHead(value);
            return;
        }
        sz++;
        node *a  = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode ->nxt = a->nxt;
        a->nxt = newnode;
    }

};
int main()
{
    LinkedList l;
        cout<<l.getSize()<<endl;

    l.insertAtHead(10);
        cout<<l.getSize()<<endl;

    l.insertAtHead(30);
        cout<<l.getSize()<<endl;

    l.insertAtHead(20);
        cout<<l.getSize()<<endl;

    l.insertAtHead(30);

    cout<<l.getSize()<<endl;

    l.Traverse();

    l.InsertAtAnyIndex(1,100);
    l.Traverse();

    l.InsertAtAnyIndex(4,400);
    l.Traverse();

    cout<<l.getSize()<<endl;

    /*

    cout<<"10 is found at : "<<l.SearchDistinctValue(10)<<endl;
    cout<<"5 is found at : "<<l.SearchDistinctValue(5)<<endl;
    cout<<"30 is found at : "<<l.SearchDistinctValue(30)<<endl;

    l.SearchAllValue(10);
*/
    return 0;
}

