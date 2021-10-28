//FIBONACCI SERIES

#include <iostream>

using namespace std;

int main() {

  int p=0,c=1,s=1,n;

  cout<<"enter the value:";

  cin>>n;

  cout<<n<<" \nthe series are:";

  for(int i=0;i<=n;i++)

  {

     cout<<p<<" " ;

     p=c;

     c=s;

     s=p+c;

  }

    return 0;

}
