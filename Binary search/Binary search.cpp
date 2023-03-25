
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int low =0, high =n-1;
    bool flag;
    while(low<=high)
    {
        int mid = (low+high)/2;
        cout<<"low = "<<low<<" high = "<<high<<" mid = "<<mid<<"\n";
        if(a[mid]==k)
        {
            cout<<"Yes "<<mid<<"\n";
            flag =1;
            break;
        }
        if(a[mid]>k)
        {
            high = mid - 1;
        }
        else
        {
            //a[mid]<k
            low = mid+1;
        }

    }
    if(flag==0)
    {
        cout<<"No";
    }
    return 0;
}
/*
input
10 8
1 2 3 4 5 6 7 8 9 10
*/
