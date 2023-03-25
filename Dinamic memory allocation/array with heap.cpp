#include<iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int *x = new int;  // dynamic memory allocation
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<x<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<endl;
    }
    delete[] x;  //after use we have to free/ or delete variable
    return 0;
}
