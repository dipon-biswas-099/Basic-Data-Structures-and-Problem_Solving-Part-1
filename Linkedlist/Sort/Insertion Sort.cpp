#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    vector<int>a(n);
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
// memory complexity = O(n)
// Time complexity = O(n^2)
    for(i=1; i<n; i++)
    {
        int idx = i;
        while(idx>=1)
        {
            if(a[idx-1] > a[idx])
            {
                swap(a[idx-1],a[idx]);
                idx--;
            }
            else
            {
                break;
            }
        }
       /* cout<<"Considering "<<i<<": ";
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";*/
    }
    cout<<"after sorting"<<"\n";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;

}
