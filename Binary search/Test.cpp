#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   for(int i=2;i<=n;i++)
   {
       if( n%i!=0)
       {
          cout<<i<<endl;
       }
   }

    return 0;
}
