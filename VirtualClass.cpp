#include <iostream>
using namespace std;

class a
{
public:
    int a1;
    a()
    {
        cout << "in a" << endl;
    }
};

class b : virtual public a
{
public:
    int b1;
    b()
    {
        cout << "in b" << endl;
    }
};

class c : virtual public a
{
public:
    int c1;
    c()
    {
        cout << "in c" << endl;
    }
};

class d : public b, c
{
public:
    int d1;
    d()
    {
        cout << "in d" << endl;
    }
};

int main()
{
    d ob1;
    ob1.a1 = 24;
    cout << ob1.a1 << endl;
}
