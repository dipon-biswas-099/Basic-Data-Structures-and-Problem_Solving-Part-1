#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{
    int randomIndex = low + rand() % (high - low + 1);
    int pivot = arr[randomIndex];
    swap(arr[randomIndex], arr[high]);

    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] >= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);

        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main()
{
  int n;
  cin>>n;
  int a[n];

  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }

    quicksort(a, 0, n);

    for (int i = 0; i <n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

