
/* C++ code to linearly search x in arr[]. If x is present then return its location, otherwise return -1.
if elements are same then it will return first one in the sequence.
*/
#include <iostream>
using namespace std;
void accept(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
	int n,x; 
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements seperated by space"<<endl;
    accept(arr,n);
    /*for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}*/
    cout<<"Enter the element to be searched: ";
    cin>>x;
    int result = search(arr, n, x);
   (result == -1)? cout<<"Element is not present in array"
                 : cout<<"Element is present at index " <<result;
   return 0;
}
