#include<bits/stdc++.h>
using namespace std;
//memory complexity order n

class Array{
private:
    int *arr;
    int cap; // capacity
    int sz; // size
    void Increase_size()
    {
        cap = cap*2;
        int *tmp = new int[cap];
        for(int i=0;i<sz;i++)
        {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }
public:
    Array()
    {
        arr= new int[1];
        cap= 1;
        sz= 0;
    }
    // time complexity =
    void Push_back(int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    void Insert(int pos, int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        for(int i=sz-1;i>=pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    //O(n)
    void Print()
    {
        for(int i=0;i<sz;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    int getsize()
    {
        return sz;
    }
    //O(1)
    int getElement(int idx)
    {
        if(idx>=sz)
        {
           cout<<"Error "<<idx<<" is out of bound!\n";
           return -1;
        }
        return arr[idx];
    }


    };
int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Insert(1,5);
    a.Print();
    cout<<a.getsize()<<"\n";
    for(int i=0;i<a.getsize();i++)
    {
        cout<<a.getElement(i)<<"\n";
    }

    return 0;
}
