#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
      /*1- brute force using two for loops - complexity-O(n^2)
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k){
                    count++;
                }
            }
        }return count;
       
       
    //   2- using sorting - complexity-O(nlogn) for sorting + O(n) for loop ~= O(nlogn)  => TLE
        int left=0;
        int right=n-1;
        int count=0;      
       
        sort(arr,arr+n); 
       
        while(left<=right){
            if(arr[left]+arr[right] == k){
                count++;
            }
            else if(arr[left]+arr[right]>k){
                right--;
            }
            else{
                left++;
            }
        }
        return count;
       
       */ 
       
       /*3- OPTIMAL SOLUTION using hashmap/unordered_map - complexity-O(n)
      */
       unordered_map<int,int> m;
       
       int count=0;
       for(int i=0;i<n;i++){
           int b=k-arr[i];
           
           if(m[b]){
               count=count+m[b];
           }
           m[arr[i]]++;
       }
       return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
