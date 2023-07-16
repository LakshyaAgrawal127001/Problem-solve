#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int diff = (n* (n+1))/2;
        // 5 * (5+1)/2;
        // 5*6/2
        // 30/2
        // 15
        int sum = 0;
        
        for(int i = 0; i < n-1; i++){
            sum += array[i];
        }
        return diff - sum;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
