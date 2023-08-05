/*problem-link :- https://practice.geeksforgeeks.org/problems/reverse-squared-sum/0
Reena had been given an array arr[] of positive integers of size N.Help her to find the value A.
A = arr[n]*arr[n] - arr[n-1]*arr[n-1] + arr[n-2]*arr[n-2] - ......... upto index 1
Example:
Input:
2
3
1 2 3
4
4 8 1 2

Output:
6
51

Explanation:
Test case 1 : 3*3 - 2*2 + 1*1 = 6


*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
       vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];  
        }
        
         int a = 0;
       
        for (int i = N - 1; i >= 0; i -= 2) {
            
            a += arr[i] * arr[i];
            if (i - 1 >= 0) {
              
                a -= arr[i - 1] * arr[i - 1];
            }
        }

        cout << a << endl;
    }

    return 0;
}
