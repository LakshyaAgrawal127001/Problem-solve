#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

	void rearrange(int arr[], int n) {
	    
	   vector<int>pve;
	   vector<int>ng;
	   
	   for(int i = 0; i < n; i++){
	       if(arr[i] < 0){
	           ng.push_back(arr[i]);
	       }
	       else{
	           pve.push_back(arr[i]);
	       }
	   }
	   int i = 0; 
	   int j = 0;
	   int k = 0;
	   
	   while(i < pve.size() && j < ng.size()){
	       arr[k++] = pve[i++];
	       arr[k++] = ng[j++];
	   }
	   while(i < pve.size()){
	       arr[k++] = pve[i++];
	   }
	   while(j < ng.size()){
	       arr[k++] = ng[j++];
	   }
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
