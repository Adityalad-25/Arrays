// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

//  Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.




class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxi = INT_MIN;
        int sum = 0;
        if(a.size()==1) return a[0];
        for(int i =0;i<a.size();i++){
            sum+=a[i];
           if(sum>maxi) {maxi=sum;}       
            if(sum<0)
            sum=0;
        }

        return maxi;
}
};
