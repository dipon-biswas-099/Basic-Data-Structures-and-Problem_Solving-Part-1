
#include<bits/stdc++.h>
using namespace std;
void print(list<int>l)
{
    // list<int> :: iterator a = l.begin();
    auto a =l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<endl;
}

void Insert(list<int>&l, int index, int value)
{
    auto it = l.begin(); // O(1)
    advance(it ,index);  // O(index)
    l.insert(it , value); //
}

void Delete(list<int>&l, int index)
{
    auto it = l.begin();
    advance(it , index);
    l.erase(it);
}

int main()
{

    list<int> l;
    //push front O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    print(l);

    //push back O(1)

    l.push_back(40);
    l.push_back(50);
    print(l);

    // pop_back O(1)

    l.pop_back();
    print(l);

// pop_front O(1)

    l.pop_front();
    print(l);

    //insert at any index
    Insert(l,1,100);
    print(l);

    // delete
    Delete(l,1);
    print(l);

    // size
    cout<<l.size()<<endl;

    return 0;
}
