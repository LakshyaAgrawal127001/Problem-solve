#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	     int s = 0;
	    int e = S.length()-1;
	    
	    while(s<e){
	        if(S[s]!=S[e]){
	            return 0;
	        }
	        s++;e--;
	    }
	    return 1;
	}

};

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
