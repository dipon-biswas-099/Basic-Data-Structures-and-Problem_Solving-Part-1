#include <iostream>

using namespace std;

int merge(int arr[], int low, int mid, int high)
{
    int count = 0;
    int leftArr[mid - low + 1];
    int rightArr[high - mid];

    for (int i = low; i <= mid; i++)
    {
        leftArr[i - low] = arr[i];
    }

    for (int j = mid + 1; j <= high; j++)
    {
        rightArr[j - mid - 1] = arr[j];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while (i < (mid - low + 1) && j < (high - mid))
    {
        if (leftArr[i] + rightArr[j] == k)
        {
            count++;
            i++;
            j++;
        }
        else if (leftArr[i] + rightArr[j] < k)
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    int leftCount = merge(leftArr, low, mid, mid - 1);
    int rightCount = merge(rightArr, mid + 1, high, high - 1);

    return count + leftCount + rightCount;
}

int countPairs(int arr[], int low, int high, int k)
{
    if (low >= high)
    {
        return 0;
    }

    int mid = (low + high) / 2;

    int leftCount = countPairs(arr, low, mid, k);
    int rightCount = countPairs(arr, mid + 1, high, k);

    int midCount = merge(arr, low, mid, high);

    return leftCount + rightCount + midCount;
}

int main()
{
    int arr[] = {6, 1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    int count = countPairs(arr, 0, n - 1, k);

    cout << "Count of pairs: " << count << endl;

    return 0;
}
