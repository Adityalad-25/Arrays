/*
gfg link -> https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&difficulty[]=-1&difficulty[]=0&company[]=Flipkart&category[]=Arrays&sortBy=submissions

Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order.
Note: The extra space is only for the array to be returned.
Try and perform all operations within the provided array. 
Example 1:
Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: There is no repeating element in the array.Therefore output is -1.
Example 2:
Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3 
Explanation: 2 and 3 occur more than once
in the given array.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        vector<int> ans;
        unordered_map<int, int> freqMap;
        
        for (int i = 0; i < n; i++) {
            freqMap[arr[i]]++;
        }
        
        for (auto kvp : freqMap) {
            if (kvp.second > 1) {
                ans.push_back(kvp.first);
            }
        }
        
        if (ans.empty()) {
            ans.push_back(-1);
        }
        sort(ans.begin(),ans.end());
              
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
