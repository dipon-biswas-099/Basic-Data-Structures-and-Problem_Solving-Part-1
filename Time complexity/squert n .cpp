#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; // space complexity = O(i)
    cin>>n;

    for(int i=1;i*i<=n;i++) // time complexity = i^2 = n
    {                                          //= i = root(n)
        if(n%i==0)
        {
            cout<<i<<"i =\n";
            cout<<(n/i)<<"\n";

        }
    }


    return 0;
}
