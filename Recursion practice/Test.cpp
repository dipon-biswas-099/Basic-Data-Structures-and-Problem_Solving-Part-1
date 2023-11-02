#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>


int print(int n)
{
    if(n==0)
        return 0;

    cout<<n<<" ";

    print(n-1);
}
int main(){

  print(5);

  return 0;

}
