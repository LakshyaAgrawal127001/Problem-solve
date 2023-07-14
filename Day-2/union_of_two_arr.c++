#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
    
    /* not passed all testcases    
      vector<int> store;
      int i = 0;
      int j = 0;
       
      while(i < n && j < m){
          if(a[i] < b[j]){
              store.push_back(a[i]);
              i++;
          }
          else if(a[i] > a[j]){
              store.push_back(b[j]);
              j++;
          }
          else if(a[i] == b[j]){
              store.push_back(b[j]);
              i++;
              j++;
          }
      }
       
      while(i < n){
          store.push_back(i);
          i++;
      }
      while(j < m){
          store.push_back(j);
          j++;
      }
      return store.size();
    */
    
    
     // optimze solution to use extra space;
      int ans = 0 ;
       
      vector<int> v;
        for ( int k = 0; k < n; k++){
             v.push_back(a[k]);
        }     
        for( int k = 0; k < m; k++){
            v.push_back(b[k]);
        }
        
        sort(v.begin(),v.end());
        
        for( int i = 0; i < v.size(); i++ )
        {
            if(v[i] == v[i+1])
                continue;
            ans++;
        }
        return ans;
        
        
        /* optimze sol = set in built in stl
        set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(a[i]);
        }
        for(int j = 0; j < m; j++){
            s.insert(b[j]);
        }
        
        return s.size();
    */    
    }
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
