
#include<bits/stdc++.h>
using namespace std;
/*
time complexity - O(1)
space complexity - O(1)
*/

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxx=max({a,b,c});
    int mini=min({a,b,c});
    int sum = a+b+c;
    int mul = a*b*c;

    cout<<maxx<<"\n";
    cout<<mini<<"\n";
    cout<<sum<<"\n";
    cout<<mul<<"\n";

    return 0;
}
