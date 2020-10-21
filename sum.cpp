#include <iostream>
using namespace std;

int main()
{
	int n; //total terms
	cout<<"Enter the total number of terms: ";
	cin>>n;
    int sum=0; //sum counter
    for (int i=0; i<n; i++)
    {
        sum=sum+i; //sum variable updation
    }
    cout<<"sum of "<<n<<" terms is :"<<sum<<endl;
}
