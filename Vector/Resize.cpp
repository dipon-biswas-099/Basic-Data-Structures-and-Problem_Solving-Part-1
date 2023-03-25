#include<bits/stdc++.h>
using namespace std;

int main()
{
   // vector<int>a ={1,2,3,4,5};
    vector<int>a ;
    a.resize(3); // resize means it make the vector a of size 5 to size 3
                // for making size 3 vector it remove last two element.
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
       //cout<<a[i]<<endl;
    }
     for(int i=0;i<a.size();i++)
    {
       // cin>>a[i];
        cout<<a[i]<<endl;
    }

    return 0;
}
