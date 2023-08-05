/* gfg link :- https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
Input:
N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
Output:
0 2 2 0 1
Explanation: 
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.
*/
#include<bits/stdc++.h>
using namespace std; 


class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int P)
  {
       unordered_map<int,int> mp;
       for(int i=0;i<n;i++)
       {
           mp[arr[i]]++;
       }
       
       for(int i = 0;i<n;i++){
           if(mp.find(i+1)!=mp.end())
           arr[i]=mp[i+1];
           else
           arr[i]=0;
       }
  }
};

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
