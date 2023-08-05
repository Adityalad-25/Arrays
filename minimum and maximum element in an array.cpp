/*
gfg: -link https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?category%5B%5D=Arrays&category%5B%5D=Arrays&page=1&query=category%5B%5DArrayspage1category%5B%5DArrays
Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.
Example 1:
Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output: 1 10000
Explanation: minimum and maximum elements of array are 1 and 10000.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    
    long long min=INT_MAX,maxi=INT_MIN;
    for(int i = 0 ; i< n;i++){
        if(a[i]<min) min = a[i];
        if(a[i]>maxi) maxi = a[i];
    }
    p = make_pair(min,maxi);
    return p;
}
