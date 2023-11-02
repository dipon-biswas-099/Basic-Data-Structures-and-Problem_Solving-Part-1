#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;   // O(1)
    cin>>n;  // O(1)
    vector<int>a(n);  //O(n)
    for(int i=0;i<n;i++) // O(n)
    {
        cin>>a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++) // O(n)
    {
        sum = sum+ a[i];   // time complexity = O(3n)
    }                       //                 = O(c n) - c = constant
    cout<<sum;                          //      = O(n)

    return 0;
}
