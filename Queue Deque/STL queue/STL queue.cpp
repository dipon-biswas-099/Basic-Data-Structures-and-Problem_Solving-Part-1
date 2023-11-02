#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(5); // mean enqueue O(1)
    q.push(10);
    q.push(15);

    //size(O(1)
    cout<<q.size()<<" size \n";

    //empty O(1)
    cout<<q.empty()<<"check empty \n";

    //front O(1)
    cout<<q.front()<<"\n";


    // dequeue O(1)
    q.pop();
    cout<<q.front()<<"\n";


    q.pop();
    cout<<q.front()<<"\n";

    q.pop();
    cout<<q.front()<<"\n";
    cout<<q.empty()<<"check empty \n";





    return 0;
}
