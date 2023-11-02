
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // log2(N) base 2
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; ++i)
    {
        cin>>v[i];
    }
    int to_find;
    cin>>to_find;
       int lo=0,hi=n-1;
       cout<<lo<<" "<<hi<<endl;
    int mid;
    while(hi-lo > 1)
    {
        int mid = (hi+lo)/2;
        cout<<"mid ="<<mid<<endl;
        if(v[mid] < to_find)
        {
            lo = mid+1;
            cout<<"low = "<<lo<<endl;
        }
        else
        {
            hi = mid;
            cout<<"High = "<<hi<<endl;
        }
    }
    if(v[lo]== to_find)
    {
        cout<<"the number found index at :"<<lo<<endl;
    }
    else if(v[hi]== to_find )
    {
        cout<<"the number found index at :"<<hi<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }

}
