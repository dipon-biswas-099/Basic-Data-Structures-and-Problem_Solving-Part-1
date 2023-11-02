#include <bits/stdc++.h>
using namespace std;

void find(int arr[], int N)
{
    int i;
    int check[N + 1];
    for(int i = 0; i <= N; i++){
      check[i] = 0;
    }

    for(i = 0; i < N; i++){
      check[arr[i] - 1] = 1;
    }


    int ans;
    for (i = 0; i <= N ; i++) {
        if (check[i] == 0)
            ans = i  + 1;
    }
    cout << ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    find(arr, n);
}
