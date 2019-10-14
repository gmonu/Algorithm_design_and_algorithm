#include <iostream>

using namespace std;

void Selectionsort(int arr[], int length)
{
    int ele, j, i;
    for(i=0;i<length;i++){
      for(j=i+1;j<length;j++){
         if(arr[i]>arr[j]){
            ele=arr[i];
            arr[i]=arr[j];
            arr[j]=ele;
         }
      }
    }


    cout << "Sorted list is as follows:" <<endl;
    for(i=0;i<length;i++)
    {
        cout << arr[i]<<endl ;
    }
}

int main()
{
    int arr[1000], i, length;
    cout << "Enter the number of elements" << endl;
    cin >> length;

    cout << "Enter the values: " << endl;


    for(i=0; i<length; i++)
    {

        cin >> arr[i];
    }

    Selectionsort(arr, length);
    return 0;
}
