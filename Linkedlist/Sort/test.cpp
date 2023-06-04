#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sp=0;
    cin>>n;
    vector<int>a;
    a.resize(n);
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int pass=0; pass<n; pass++)
    {
        int last = n-1-pass;
        bool sorted = true;

        for( j=0; j<=last-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sp++;
                sorted = false;
            }
        }
        if(sorted)
            break;
      /* // cout<<"after pass "<<pass<<" ";
        for( i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }*/
    }
cout<<"Array is sorted int "<<sp<<" swap."<<endl;
cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[n-1]<<endl;

   /* cout<<"after sorting "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }*/



    return 0;
}
