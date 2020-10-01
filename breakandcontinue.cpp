#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age > 12) {
        cout << "You are an infant";
    }
    else {
        cout << "You are an adolosent";
    }

    return 0;
}
