#include<iostream>
using namespace std;

void reverseAlgo(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}




void rotateByOne(int arr[],int d,int n)
{
    if(d==0)
        return;

    d=d%n;

    reverseAlgo(arr,0,d-1);
    reverseAlgo(arr,d,n-1);
    reverseAlgo(arr,0,n-1);

}

void printArray(int arr[],int size)
{
    for(int i = 0;i<size;i++)
        cout<<arr[i]<<" ";
}

void displayArray(int arr[],int size)
{
    for(int i = 0;i<size;i++)
        cout<<arr[i]<<" ";
}




int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original array";
    displayArray(arr,n);
    rotateByOne(arr,2,n);
    cout<<"Rotated array";
    printArray(arr,n);

    return 0;
}
