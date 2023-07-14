#include <bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { /*  Brute force used TC is O((n+m) log(n+m)); SC => O(N+M); but not use this
           vector<int> ans;
           
           for(int i = 0; i < n; i++){
               ans.push_back(arr1[i]);
           }
           
           for(int j = 0; j < m; j++){
               ans.push_back(arr2[j]);
           }
           
           sort(ans.begin(),ans.end());
           
           for(int i = 0; i < n; i++){
               arr1[i] = ans[i];
           }
           
           for(int i = n; i < ans.size(); i++){
               arr2[i-n] = ans[i];
            }*/
            
            
            // Approach 2 -> two pointer
            
            int i = n-1;
            int j = 0;
            
            while(i >= 0 && j < m){
                if(arr1[i] >= arr2[j]){
                    swap(arr1[i],arr2[j]);
                    i--;
                    j++;
                }
                
                else {
                    break;
                }
                
            }
                sort(arr1, arr1 + n);
                sort(arr2, arr2 + m);
                
                
        // approach 3 = > merge sort
    } 
};

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
}
