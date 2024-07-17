#include <bits/stdc++.h>
using namespace std;

// Solution 1: 
int main(){
    long n;
    cin >> n;
    long nums[n-1];
    long arr[n-1];
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){arr[i] = i+1;}
    sort(nums,nums+n); //std::sort O(nlogn)
    for(int k=0;k<n;k++){
        if(nums[k] != arr[k]){
            cout << arr[k] << endl;
            return 0;
        }
    }
    
    return 0;
}

