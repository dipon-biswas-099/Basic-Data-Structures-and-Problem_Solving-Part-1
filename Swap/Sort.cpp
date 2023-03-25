#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>a={8,1,2,6,7};
for(int i=0;i<a.size();i++)
{
    cout<<a[i]<<" ";
}
   sort(a.begin() , a.end());

    cout<<"after sorting"<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

     cout<<" sorting from index 1 to 2"<<endl;
        sort(a.begin()+1 , a.begin()+2+1);

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }




    return 0;
}
