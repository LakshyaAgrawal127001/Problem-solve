#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        
        int reach = 0;
        int curr = 0;
        int cnt = 0;
        
        for(int i = 0; i < n-1; i++){
            reach = max(reach, arr[i]+ i);
            
            if(i == curr){
                cnt ++;
                
                curr = reach;
                
                if(curr >= n-1)
                    return cnt;
            }
        }
        return -1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
