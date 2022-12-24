#include <iostream>

using namespace std;

// Recursive function to search for x in arr[]
int searchElement(int arr[], int size, int x) {
	
	int count;
	
	// Base case (Element not present in the array)
	if (size < 0) {
		return -1;
	}
	// Base case (Element found, return its position)
	if (arr[size] == x) {
        count++;
		return count;
	}

	// Recursive case
	return searchElement(arr+1, size-1, x);

}


// Driver code
int main() {
	int arr[] = {1, 0, 2, 0, 4};
	int size = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int idx = searchElement(arr, size, x);
	if (idx != -1)
		cout << "Element " << x << " is present " <<idx<<" times in the array";
	else
		cout << "Element " << x << " is not present in the array";
	return 0;
}

