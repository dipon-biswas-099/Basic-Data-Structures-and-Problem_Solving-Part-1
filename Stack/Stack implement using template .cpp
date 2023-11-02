#include<bits/stdc++.h>
using namespace std;
// Template based stack implementation with dinamic array
template<class T >
class Stack
{
public:


    T *a;
    int  stack_size ;
    int Array_cap;

    Stack()
    {
        a = new T [1];
        Array_cap =1;
        stack_size =0;
    }
    // make array cap multiplied by 2
    void increase_size()
    {
        T *tmp;
        tmp = new T[Array_cap*2];
        for(int i=0; i<Array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete []tmp;
        Array_cap = Array_cap*2;
    }

    // add element in the stack . O(1)
    void push(T val)
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
        if(stack_size  == 0)
        {
            cout<<"stack is empty \n";
            return ;
        }

        stack_size = stack_size - 1;

    }

    // returns the top element from the stack . O(1)
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"stack is empty \n";
            //this is for crash e program //
            assert(false);
//            T a;
//            return a;
        }

        return a[stack_size -1];
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

