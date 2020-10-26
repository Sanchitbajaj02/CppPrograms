#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int *a = new int[n]; // memory of type int is passed to pointer a.
    cout<<"enter the elemets"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<endl<<a[i]<<endl;
    }
    delete[] a;
    for(i=0;i<n;i++)
    {
        cout<<endl<<a[i]<<endl;
    }
}
