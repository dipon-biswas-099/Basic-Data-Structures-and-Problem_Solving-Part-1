
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    for(int i=0;i<10;i++)
    {
        a.push_back(i);
    }

   a.insert(a.begin()+1,100); //insert value in a Particular  index of array
                                // begin()+1,100 means "insert 100 to index number 1"
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    // now delete element
    a.erase(a.begin()+1);

    cout<<"after delete element "<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    // delete last element


 /*  cout<<"after delete Last  element "<<endl;
    a.pop_back();
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }*/



    return 0;
}
