#include<bits/stdc++.h>
using namespace std;
// stack implementation with dinamic array
class Stack{
public:


    int *a;
    int  stack_size ;
    int Array_cap;

    Stack()
    {
        a = new int [1];
        Array_cap =1;
        stack_size =0;
    }
    // make array cap multiplied by 2
    void increase_size()
    {
        int *tmp;
        tmp = new int[Array_cap*2];
        for(int i=0;i<Array_cap;i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete []tmp;
        Array_cap = Array_cap*2;
    }

    // add element in the stack . O(1)
    void push(int val)
    {
        if(stack_size+1 > Array_cap)
        {
            increase_size();
        }
        stack_size = stack_size +1 ;
        a[stack_size-1] = val;
    }

    // delete the topmost element from the stack O(1)
    void pop()
    {
        if(stack_size -1 == 0)
        {
            cout<<"stack is empty \n";
            return ;
        }
        a[stack_size -1] =0;
         stack_size = stack_size - 1;

    }

    // returns the top element from the stack . O(1)
    int top()
    {
        if(stack_size == 0)
        {
            cout<<"stack is empty \n";
            return -1;
        }

        return a[stack_size -1];
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

