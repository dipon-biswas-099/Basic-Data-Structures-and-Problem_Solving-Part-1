#include<iostream>
using namespace std;

int main()
{

    int n,k,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>k;
        sum = sum+k;
    }
    cout<<sum;


    return 0;
}
