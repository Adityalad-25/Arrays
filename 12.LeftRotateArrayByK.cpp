// LEft rotate Array by k places 


#include <bits/stdc++.h>
using namespace std;
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	     
	     if(k>n) k%=n; // if k is greater than n 
	      // array = 1 2 3 4 5  and k = 2; ans -> 3 4 5 1 2
	     reverse(arr,arr+n);  // 5 4 3 2 1 
	     reverse(arr,arr+(n-k)); //  3 4 5 2 1
	     reverse(arr+(n-k),arr+n); // 3 4 5 1 2 
	     
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends
