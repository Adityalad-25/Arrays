/* link -> https://www.codingninjas.com/studio/problems/subarray-with-maximum-product_6890008?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

Problem Statement
Given an array ‘Arr’ that has ‘N’ elements. You have to find the subarray of ‘Arr’ that has the largest product. You must return the product of the subarray with the maximum product.
For example:
When ‘N’ = 5, and ‘Arr’ = {-2, 3, -4, 0}
The subarrays of ‘Arr’ are:
{-2}, {-2, 3}, {-2, 3, -4}, {-2, 3, -4, 0}, {3}, {3, -4}, {3, -4, 0}, {-4}, {-4, 0}, {0}.
Among these, {-2, 3, -4} is the subarray having the maximum product equal to 24.
Hence, the answer is 24.

*/

#include<vector>
#include<climits>
int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int prefix = 1,sufix=1,ans=INT_MIN;
	int n = arr.size();
	for(int i = 0 ; i<n ; i++){
       
	   if(prefix == 0) prefix = 1;
	   if(sufix== 0) sufix = 1;
    
	   prefix= prefix*arr[i];
	   sufix=sufix*arr[n-i-1];

	   ans = max(ans,max(prefix,sufix));

	}
	return ans;
}
