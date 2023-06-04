
#include<bits/stdc++.h>
using namespace std;


int main()
{
      int n;
      cin>>n;
      vector<int>prime;
      vector<bool>visited(n+1);
      for(int i=2;i<=n;i++)
      {
          if(visited[i]==false)
          {
              prime.push_back(i);
              for(int x=2;i*x<=n;x++)
              {
                  visited[i*x] = true;
              }
          }
      }
      cout<<prime.size()<<"\n";
      for(int i=0;i<prime.size();i++)
      {
          cout<<prime[i]<<" ";
      }
      cout<<endl;




    return 0;
}
