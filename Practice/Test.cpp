#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];

    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    for(int j = 0; j<n; j++){
        for(int i = 0; i<n; i++){
            if(arr1[i] == j+1){
                arr2[j] = i+1;
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr2

        [i]<<" ";
    }
}
