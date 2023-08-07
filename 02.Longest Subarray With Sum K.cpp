/* link -> https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

Problem Statement:-
You are given an array ‘A’ of size ‘N’ and an integer ‘K’. You need to print the length of the longest subarray of array ‘A’ whose sum = ‘K’.
Example:
Input: ‘N’ = 7 ‘K’ = 3
‘A’ = [1, 2, 3, 1, 1, 1, 1]
Output: 3
Explanation: Subarrays whose sum = ‘3’ are:
[1, 2], [3], [1, 1, 1], [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.
*/


int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    
    int n = a.size();
    long long sum = a[0];
    int left=0,right=0,maxlen=0;
    
    while(right<n){
        
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        
        right++;
        if(right<n)sum+=a[right];
    }
    return maxlen;
}
