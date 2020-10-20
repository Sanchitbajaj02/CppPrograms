#include<iostream>
using namespace std;
int main()
{
  int num,first=0,second=1,next;
    cout<<"Fibonacci Series"<<endl;
    cout<<"Enter the number of terms to be printed in the Fibonacci series:"<<endl;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }


    return 0;
}

