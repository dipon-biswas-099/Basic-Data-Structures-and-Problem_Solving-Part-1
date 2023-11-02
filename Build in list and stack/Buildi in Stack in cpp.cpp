#include<bits/stdc++.h>
using namespace std;
int main()
{
    //stack
    stack<int> st;

    // push
    st.push(10);
    st.push(20);
    st.push(30);

    //size
    cout<<"Size of stack : "<<st.size()<<endl;
    //top
    cout<<st.top()<<endl;

    // pop
    st.pop();
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;







    return 0;
}
