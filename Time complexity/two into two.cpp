#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;   // O(1)
    cin>>n;  // O(1)
    vector<int>a(n*n);  //O(n^2)
    for(int i=0;i<n*n;i++) // O(n^2)
    {
        cin>>a[i];
    }
    int sum = 0;
    for(int i=0;i<n*n;i++) // O(n^n)
    {
        sum = sum+ a[i];   // time complexity = O(n^2)
                            // space complexity = O(n^2)
    }                       //                 = O(c n) - c = constant
    cout<<sum;                          //      = O(n)

    return 0;
}

