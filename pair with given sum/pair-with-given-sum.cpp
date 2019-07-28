#include<iostream>
using namespace std;

void pairWithGivenSum(int arr[], int x, int n)
{
    for(int i=0; i<= n-1; i++)
    {
        for(int j=i+1; j<= n-1; j++)
        {
            if(arr[i]+arr[j] == x)
            {
                cout<<"pair is "<<arr[i]<<" and "<<arr[j]<<endl; 
            }
        }
    }
}

int main()
{
    int arr[] = {1,2,4,6,3,45,23,66,34,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    pairWithGivenSum(arr,24,n);
}