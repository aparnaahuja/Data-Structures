#include<iostream>
using namespace std;

int binary_search(int arr[], int first, int last, int value)
{   


    while(first<=last)
    {   int mid = (first+last)/2;
        if(arr[mid] == value)
        {
            return mid+1;
        }

        if(arr[mid]>value && value>=arr[first])
        {
            last = mid-1;
        }

        if(arr[mid]<value && value<=arr[last])
        {
            first = mid+1;
        }


    }



}



int main()
{
    int arr[] = {0,24,33,44,55,61,73,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Element number "<<binary_search(arr,0,n-1,0);

}