#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        /*
        Brute force => O(N2)
        int ans=0;
        for(int i=0;i<n;i++){
         	for(int j=i;j<n;j++)
	        	if(arr[i]<=arr[j]) ans=max(ans,j-i);

      }
       return ans;
        */
        
        
        // Approach 2 => Two Pointers
        int i = 0; 
        int j = 0; 
        int ans = 0;
        
        vector<int> mini(n),more(n);
        
        mini[0] = arr[0];
        more[n-1] = arr[n-1];
        
        for(int i = 1; i < n; i++){
            mini[i] = min(mini[i-1], arr[i]);
            more[n-i-1] = max(more[n-i], arr[n-i-1]);
        }
        
        i = 0;
        j = 0;
        
        while(i < n && j < n){
            while(j < n && mini[i] <= more[j]){
                j++;
            }
            ans = max(ans, j-i-1);
            i++;
        }
        return ans;
    }

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
