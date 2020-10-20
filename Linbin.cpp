/*==============================|-problem statement-|==============================*/
/*
    Implement linear search and binary search
*/

/*===================================|-solution-|===================================*/
#include <iostream>
#include <algorithm>
using namespace std;

/*
Linear search traverses through the whole array,
and return the index of the index if the search item matches the arrayth item
*/
int linearSearch(int arr[], int n, int item){
    for(int i = 0;i<n;i++){
        if(arr[i] == item){
            return i;
        }
    }
    return -1;

}
/*
Bineary serach traversels through a sorted by  equating  mid values with the searched items
and at every turn if the mod does not match it updates update by comparing its value with the searched item.
*/
int binarySearch(int arr[], int n, int item){
    int low = 0, high = n -1, mid = (low +high )/2;
    while(low<high){
        if(arr[low] == item){
            return low;
        }else if(arr[high] == item){
            return high;
        }else if(arr[mid] == item){
            return mid;
        }else if(arr[mid] < item){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        mid = (high + low)/2;
    }
    return -1;
}

/*
//implementation of is_sorted (pre defined function available in algorithm)
Boolean isSorted(int arr[]){
    for(int i = 1 i<n;i++){
        if (a[i] < ar[i-1]){
            return 0;
        }
    }
    return 1;
}
*/
int main(int argc, char const *argv[])
{

    int n, item;

    //the size of the array
    cin>>n;
    int arr[n];

    //inputting the array elements
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    cin>>item;

    //searches element using linear search
    cout<<linearSearch(arr, n, item);

    cout<<"\n";


    //searches element using binary search , given that the array is sorted in increasing order;
    if(is_sorted(arr, arr+n)){
        cout<<binarySearch(arr, n, item);
    }else{
        cout<<"not sorted in asc order";
    }



    return 0;
}