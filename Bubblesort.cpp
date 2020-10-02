#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a[10],temp=0;
	cout<<"Enter the length of array";
	cin>>n;
	cout<<"\n Enter elements in the array";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cout<<"\n"<<a[i];
	for(i=n;i>1;i--)
		for(j=0;j<i-1;j++)
		 if(a[j]>a[j+1])
		 	{
			 temp=a[j];
		 	a[j]=a[j+1];
		 	a[j+1]=temp;
		 }
	if(temp==0)
		printf("Bubble sort algorithm is not required");
		else
		{
		cout<<"\n \t";
		for(i=0;i<n;i++)
		cout<<"\n"<<a[i];
		}
	return 0;
}
