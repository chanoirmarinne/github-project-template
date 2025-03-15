// C++ program to find the frequency of an element in an array
#include <iostream>
using namespace std;

int main() {
	int n; // size of the array
	cout << "Enter the size of the array: ";
	cin >> n;

	int arr[n]; // create an array with size n
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; // read the elements of the array from user
	}

	int x;
	cout << "Enter the element to be searched: ";
	cin >> x;

	// initialize count variable with 0
	int count = 0;

	// loop through the array and check for the frequency of x
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			count++; // increment the count variable if element is found
		}
	}

	// print the frequency of x in the array
	cout << "Frequency of " << x << " is: " << count << endl;

	return 0;
}
