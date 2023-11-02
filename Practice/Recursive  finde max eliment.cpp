#include<bits/stdc++.h>
using namespace std;

int findMaxRecursive(int arr[], int size, int currentIndex)
{
    if (currentIndex == size - 1)
    {
        return arr[currentIndex];
    }

    int maxInRemaining = findMaxRecursive(arr, size, currentIndex + 1);

    return (arr[currentIndex] > maxInRemaining) ? arr[currentIndex] : maxInRemaining;
}

int findMax(int arr[], int size)
{
    return findMaxRecursive(arr, size, 0);
}

int main()
{
    int n;
    cin>>n;
    //vector<int>a(n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int maxElement = findMax(a, n);

    cout<< maxElement<<endl;

    return 0;
}

