#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        
        int cnt = 1;
        
        int a = 0;
        
        int num = n/k;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == arr[i+1]){
                cnt ++;
                if(cnt == num+1){
                    a++;
                }
            }
            else{
                cnt = 1;
            }
        }
        return a;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
