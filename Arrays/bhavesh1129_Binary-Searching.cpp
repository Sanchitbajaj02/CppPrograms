// C++ program to implement recursive Binary Search 
#include <bits/stdc++.h> 
using namespace std; 
int binarySearch(int arr[], int l, int r, int x) 
{ 
	while (l <= r) { 
		int m = l + (r - l) / 2; 
		if (arr[m] == x) 
			return m; 
		if (arr[m] < x) 
			l = m + 1; 
		else
			r = m - 1; 
	} 
	return -1; 
} 

int main(void) 
{ 
	int arr[] = { 42, 32, 34, 3, 10 }; 
	int x = 10; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result; 
	return 0; 
} 


