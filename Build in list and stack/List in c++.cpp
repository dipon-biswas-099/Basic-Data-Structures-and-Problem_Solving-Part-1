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
    return 0;
}
