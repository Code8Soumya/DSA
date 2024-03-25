#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Input your array size: ";
    cin >> n;
    int arr[n];
    cout << "Add your elements: "<<endl;
    for (int i = 0; i < n; i++)
    {   
        cin >> arr[i];
    }
    cout << "Your unsorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int min_idx;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    cout << endl;
    cout << "Your sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}