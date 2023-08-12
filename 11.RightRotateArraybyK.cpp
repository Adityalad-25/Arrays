//Rotate an array by k elements to the right

#include <algorithm> 
#include <iostream> 
#include <vector>
using namespace std;

 
void rotateArray(vector<int>& arr, int k)
{
	int n = arr.size();

	// Mod k with the size of the array
	// To handle the case where k is greater than the size of the array
	k %= n;

	// array = 1 2 3 4 5 
	// Reverse the entire array
	reverse(arr.begin(), arr.end());  //5 4 3 2 1

	// Reverse the first k elements
	reverse(arr.begin(), arr.begin() + k);  // 4 5 3 2 1
 
	// Reverse the remaining n-k elements
	reverse(arr.begin() + k, arr.end());  // 4 5 1 2 3
} 

int main()
{
	
	vector<int> arr = { 1, 2, 3, 4, 5 };
	int k = 2;
	rotateArray(arr, k);
	for (int i : arr) {
		cout << i << " ";
	}

}
