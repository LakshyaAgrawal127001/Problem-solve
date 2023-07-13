//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
        /* Brute force
        int mod = 1000000007;
        long result = 1;
        for (int i = 0; i < R; i++) {
            result = (result * N) % mod;
        }
        return (int) result;
        */
        
        /* Binary Exponentiation 
        
                    int mod = 1000000007;
            long long result = 1;
            while (R > 0) {
                if (R % 2 == 1) {
                    result = (result * N) % mod;
                }
                R /= 2;
                N = (N * 1LL * N) % mod;
            }
            return result;
        */    
      // Modular exponentiation 
      
      int divi = 1000000007;
      
      long long res = 1;
      
      while( R > 0){
          if(R % 2 == 1){
              res = (res * N ) % divi;
          }
          R /= 2;
          
          N = (N * 1LL * N) % divi;
      }
        return res;
    }

};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends
