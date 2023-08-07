#include<iostream>
#include<vector>
using namespace std;

bool checkSortedOrUnsorted(vector<int> a,int i){
    //base case
    if(i>=a.size()) return true;
    if(a[i]<a[i-1]) return false;
    
    return checkSortedOrUnsorted(a,i+1);
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    
    bool ans = checkSortedOrUnsorted(a,1);
    cout<<ans;
    
}
