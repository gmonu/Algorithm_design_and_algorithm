#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
  int arr[1000], n, i;
    cout<<"Welcome To QUICK SORT"<<endl;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;
    cout<<"Enter the value of elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Before sorting"<<endl;

    for(i=0;i<n;i++)
    {

        cout<<":"<<arr[i]<<endl;
    }

    quickSort(arr, 0, n - 1);

cout<<"After sorting"<<endl;
    for(i=0;i<n;i++)
    {

        cout<<":"<<arr[i]<<endl;
    }

    return 0;
}
