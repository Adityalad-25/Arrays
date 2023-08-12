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

	// Reverse the entire array
	reverse(arr.begin(), arr.end());

	// Reverse the first k elements
	reverse(arr.begin(), arr.begin() + k);

	// Reverse the remaining n-k elements
	reverse(arr.begin() + k, arr.end());
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
