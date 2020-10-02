#include <iostream.h>
using namespace std;

/*Merge Sort is a comparison based algorithm that sorts an array in O(nlogn) time complexity*/

void merg(int arr[], int low, int mid, int high){
    /*function for merging parts of arr in correct order*/
    int i,j,k;
    int temp[high+1];
    i=k=low;j=mid+1;
    /*copying the smaller element out of arr[i] and arr[j] into temp*/
    while(i<=mid && j<=high){
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    /*now the comparison between elements of left and right halves of arr is complete; 
    one of the halves might have elements larger than the largest element of the other;
    these need to be copied into arr now;
    only one of the following loops will run depeding on which of i or j have reached their upper limit*/
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=high){
        temp[k++]=arr[j++];
    }
    for(i=low;i<=high;i++)
        arr[i]=temp[i];
}

void merge_sort(int arr[],int low, int high){
    /*recursive function for sorting an array; Sorts the first half and then the second half by calling itself repeatedly*/
    if(low<high){
        int mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merg(arr,low,mid,high);
    }
}

int main()
{
    int i, n;
    int arr[1000];
    cout<<"Enter the length of array (less than or equal to 1000) : ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter element at "<<i<<" : ";
        cin>>arr[i];
    }
    merge_sort(arr, 0, n-1);
    cout<<"\nSorted Array: "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}
