#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>a;
    a.resize(n);//O(n)
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // n pass
    //time complexity :O(n^2)
    //memory complexity :0(n)
    /*
     pass =0, cnt = n-1
     pass =1 , cnt = n -2
     pass = n-1 . cnt = 0;
    */
    for(int pass = 0; pass<n; pass++)
    {
        int last = n-1-pass;
        bool sorted = true;
        for(int j=0;j<=last-1;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j] , a[j+1]);
                sorted = false;
            }

        }
        if(sorted)
                break;
        //cout<<endl;
        cout<<"After pass "<<pass<<": ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }cout<<"\n";
    }
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}
