
#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* nxt;
};

class LinkedList {
public:
    node* head;
    int size;

    LinkedList() {
        head = NULL;
        size = 0;
    }

    node* createNewNode(int value) {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void insertAtHead(int value) {
        node* newnode = createNewNode(value);
        if (head == NULL) {
            head = newnode;
        }
        else {
            newnode->nxt = head;
            head = newnode;
        }
        size++;
    }

    void traverse() {
        node* a = head;
        while (a != NULL) {
            std::cout << a->data << " ";
            a = a->nxt;
        }
    cout << endl;
    }

    int getSize() {
        return size;
    }

    int getValue(int index) {
        if (index >= size) {
            return -1;
        }
        node* a = head;
        int currIndex = 0;
        while (a != NULL) {
            if (currIndex == index) {
                return a->data;
            }
            a = a->nxt;
            currIndex++;
        }
        return -1;
    }

    void printReverseUtil(node* curr) {
        if (curr == NULL) {
            return;
        }
        printReverseUtil(curr->nxt);
        cout << curr->data << " ";
    }

    void printReverse() {
        printReverseUtil(head);
        cout << "\n";
    }

    void swapFirst() {
        if (size < 2) {
            return;
        }
        node* first = head;
        node* second = head->nxt;
        first->nxt = second->nxt;
        second->nxt = first;
        head = second;
    }
};

int main() {
    LinkedList l;
    cout << l.getSize() << endl;
    l.insertAtHead(5);
    cout << l.getSize() <<endl;
    l.insertAtHead(6);
    l.insertAtHead(30);
    cout << l.getSize() << endl;
    l.insertAtHead(20);
    l.insertAtHead(30);

    cout << l.getValue(2) << endl;
    cout << l.getValue(6) <<endl;

    l.printReverse();
    l.traverse();
    l.swapFirst();
    l.traverse();
    l.printReverse();

    return 0;
}
