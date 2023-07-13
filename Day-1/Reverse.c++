#include <bits/stdc++.h>
using namespace std;

/*
Approach 4 -> recursion  

T.C => O(N)
S.C => O(N)


void reversestr(string&str, int i, int j){
    if(i > j){
        return ;
    }

    swap(str[i++],str[j--]);

    reversestr(str,i,j);
}
*/

string reverseWord(string str)
{
    
/*
    // Brute force approach => O(N2) TLE result
    int n = str.length();
    for(int i = 0; i < n ; i++){
        for(int j = n-1; j < n; j--){
            swap(str[i],str[j]);
        }
    }
    return str;
*/


    /*

    Approach 2 Two pointer -> O(N) Accepted
    int i = 0;
    int j = str.length()-1;

    while(i <= j){
        swap(str[i++],str[j--]);
    }
    return str;
    */

    /*
    Approach 3 STL function -> O(N)

   reverse(str.begin(),str.end());
   return str;
   */

    /*recursion function

    reversestr(str,0,str.length()-1);
    return str;
    */
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}
