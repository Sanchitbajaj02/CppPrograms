#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x1,x2,y1,y2;
	float gradient;
	cout<<"First coordinate"<<endl;
  	cout<<"Enter x value : ";
	cin>>x1;
	cout<<"Enter y value : ";
	cin>>y1;
	cout<<endl;
	cout<<"Second coordinate"<<endl;
	cout<<"Enter x value : ";
	cin>>x2;
	cout<<"Enter y value : ";
	cin>>y2;
	cout<<endl;
	
	gradient = (float(y2-y1)/(x2-x1));
	cout<<"Gradient of line : "<<gradient;

	return 0;
}
