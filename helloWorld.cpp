#include <iostream>
using namespace std;

int main() {
    cout<<"Enter length of array: ";
    int n;
    cin>>n;
    cout<<"Enter array elements in order: ";
    int arr[n];
    //declaring and intializing variables for sum of array elements and multiplicaiton of array elements
    int sum_arr=0, multiplication_arr=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum_arr+=arr[i];
        multiplication_arr*=arr[i];
    }
    cout<<"Sum of elements of array: "<<sum_arr<<endl;
    cout<<"Multiplication of elements of array: "<<multiplication_arr<<endl;
        return 0;
}
