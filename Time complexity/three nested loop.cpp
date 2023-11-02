#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) // 0(n*n^2)= O(n^3)
    {
        for(int j=0;j<n;j++) // O(n*n) = O(n^2)
        {
            for(int k=0;k<n;k++)  // O(n)
            {
                cout<<i<<" "<<j<<" "<<k<<" "<<endl;
            }
        }
    }


    return 0;
}
