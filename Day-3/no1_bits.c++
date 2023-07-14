#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        
        /* brute force T.C => O(1);
        int cnt = 0;
        for(int i = 0; i < 32; i++){
            int mask = 1 <<i;
            
            if(mask & N){
                cnt++;
            }
        }
        return cnt;
     */   
        
    //   approach 2 - Brian Kernighan's approach
        int cnt = 0;
        while(N > 0){
            N = N & (N-1);
            cnt++;
        }
        
        return cnt;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
