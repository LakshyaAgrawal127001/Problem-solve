#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
       // sort the array
        sort(arr,arr+n);
        
        // actual difference of arr
        int diff = arr[n-1] - arr[0];
        
        // logic for finding minimum difference
        int small =  arr[0] + k;
        int large = arr[n-1] - k;
        
        
        // traverse the loop to n-1;
        for(int i = 0; i < n-1; i++){
            
            // to get min & max of the array
            int mini = min(small, arr[i+1] - k); 
            int more = max(large, arr[i] + k);
            
            if(mini < 0){
                continue;
            }
            
            diff = min(diff, more - mini);  
        }
        return diff;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
