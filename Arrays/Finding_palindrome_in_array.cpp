#include <iostream>

using namespace std;

bool recursionpal(char arraychar[], int size){
  int first = 0;
  int last = size - 1;
  if (size == 0 || size == 1){
    return true;
  }
  else if (arraychar[first] == arraychar[last]){
    return recursionpal(arraychar + 1, size - 2);
  }
  else{
    return false;
  }
}

int main() {
  int size;
  bool palindrome = false;
  cout<<"input the size of the array :";
  cin>>size;
  char arraychar[size];
  cout<<"Populate the array of char"<<endl;
  for (int i = 0; i < size; i++){
    cout<<"input a letter for the "<<i+1<<" character :";
    cin>>arraychar[i];
  }
  palindrome = recursionpal(arraychar, size);
  if (palindrome == true){
    cout<<"the array is a palindrome"<<endl;
  }
  else{
    cout<<"the array is not a palindrome"<<endl;
  }
  return 0;
}
