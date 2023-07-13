#include<bits/stdc++.h>
using namespace std;

/* this question not use full for recursion way you solved by brute force approach
int rsum(int arr[],int n){
    // Time complexity: O(n)
    // Space complexity: O(1)
    
    // base case
    if(n == 0){
        return 0;
    }
    
    // recursive
    int more = INT_MIN;
    int mini = INT_MAX;
    
    for(int i = 0; i < n; i++){
        more = max(more,arr[i]);
        mini = min(mini,arr[i]);
    }
    	return mini + more;
}
*/
class Solution
{
   public:
    int findSum(int arr[], int N)
    {
        //  Brute force => T.C = O(N)
    	int more =  INT_MIN;
    	int mini = INT_MAX;
    	
    	for(int i = 0; i < N; i++){
    	    more = max(more,arr[i]);
    	    mini = min(mini,arr[i]);
    	}
    	return mini + more;
    	
    	/*
    	int ans = rsum(arr,N);
    	
    	return ans;
    	*/
    }

};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

