
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;   // declear a vector of int datatype .
    for(int i=0;i<10;i++)
    {
        cout<<"before push then size of a is = "<<a.size()<<endl;
        a.push_back(i);
        cout<<"after push then the size of a is = "<<a.size()<<endl;

    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }



    return 0;
}
