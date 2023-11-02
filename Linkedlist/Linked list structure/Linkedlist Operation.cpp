#include<bits/stdc++.h>
using namespace std;

class node{

public:
    int data;
    node * nxt;

};

class LinkedList{
public:
    node * head;

    LinkedList()
    {
        head = NULL;
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


};
int main()
{
    LinkedList l;
    l.insertAtHead(10);
    l.insertAtHead(30);
    l.insertAtHead(20);
    l.insertAtHead(30);

    l.Traverse();

    cout<<"10 is found at : "<<l.SearchDistinctValue(10)<<endl;
    cout<<"5 is found at : "<<l.SearchDistinctValue(5)<<endl;
    cout<<"30 is found at : "<<l.SearchDistinctValue(30)<<endl;

    l.SearchAllValue(10);

    return 0;
}

