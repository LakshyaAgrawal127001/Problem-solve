#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        
        // sliding window approach
       int size=0;
        int mc=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                size++;
            }
        }
        if(size==0||size==n)return 0;
        int i=0;
        int j=0;
        while(j<n){
            if(arr[j]>k){
                mc++;
            }
            if(j-i+1<size){
                j++;
            }
            else if(j-i+1==size){
                if(mc<=0)return 0;
                ans=min(ans,mc);
                if(arr[i]>k)mc--;
                i++;
                j++;
            }
        }
        return ans;
    }
};

int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
