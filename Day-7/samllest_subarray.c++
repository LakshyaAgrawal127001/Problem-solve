#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // sliding window 
       int i=0, j=0, sum = arr[0], mini = INT_MAX;
       while(j < n) {
           if(sum <= x) {
               j++; 
               sum = sum + arr[j];
           }
           else if(sum > x) {
               mini = min(mini, j-i+1);
               sum = sum - arr[i];
               i++;
           }
       } 
       return mini; 
    }
};

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
