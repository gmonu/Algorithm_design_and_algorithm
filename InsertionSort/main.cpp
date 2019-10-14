#include <iostream>

using namespace std;

void Insertionsort(int arr[], int length)
{
    int ele, j, i;
    for(i=1;i<=length-1;i++)
    {
        ele = arr[i];
        j = i-1;

        while(ele<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = ele;
    }

    cout << "Sorted list is as follows:" <<endl;
    for(i=0;i<length;i++)
    {
        cout << arr[i]<<endl ;
    }
}

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


void Bubble_sort(int arr[], int length)
{
  int i, j, t;

  for (i = 0 ; i < length - 1; i++)
  {
    for (j = 0 ; j < length - i - 1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        /* Swapping */

        t         = arr[j];
        arr[j]   = arr[j+1];
        arr[j+1] = t;
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
    int select;
   do{
    int arr[1000], i, length;
    cout<<"Menu Driven"<<endl;
    cout<<"1. Insertion Sort"<<endl;
    cout<<"2. Selection Sort"<<endl;
    cout<<"3. Bubble Sort"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"Enter your choice(1-4)"<<endl;

    cin>>select;

    switch(select)
    {


        case 1:
                cout << "Enter the number of elements" << endl;
                cin >> length;

                cout << "Enter the values: " << endl;


                for(i=0; i<length; i++)
                {

                    cin >> arr[i];
                }

            cout<<"Given Data is sorted using Insertion Sort"<<endl;
            Insertionsort(arr, length);
            break;


        case 2:
              cout << "Enter the number of elements" << endl;
              cin >> length;

              cout << "Enter the values: " << endl;


                for(i=0; i<length; i++)
                {

                    cin >> arr[i];
                }

            cout<<"Given Data is sorted using Selection Sort"<<endl;
            Selectionsort(arr,length);
            break;


        case 3:
              cout << "Enter the number of elements" << endl;
                cin >> length;

                cout << "Enter the values: " << endl;


                for(i=0; i<length; i++)
                {

                    cin >> arr[i];
                }

            cout<<"Given Data is sorted using Bubble Sort"<<endl;
            Bubble_sort(arr,length);
            break;

            case 4:    cout<<"EXITING...."<<endl;
	    break;

        default:
            cout<<"Sorry you have entered wrong choice"<<endl<<endl;
    }
    }while(select != 4);
    return 0;
}
