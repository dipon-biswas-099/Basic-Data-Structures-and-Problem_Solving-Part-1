#include<bits/stdc++.h>
using namespace std;
/*
    time complexity =O(2^n);
    memory complexity=O(n)
*/
int called=0;
//int save[100];

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    //fib(n-1)+fib(n-2)
    int x=fib(n-1);
    called++;
    int y=fib(n-2);
    called++;
    return x+y;
}

int main()
{
    int n;
    cin>>n;
    cout<<"fib = "<<fib(n)<<"\n";
    cout<<"Called = "<<called<<"\n";


    return 0;
}
