#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        // brute force approach => O(n3)
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1; j < n; j++){
        //         for(int k = j + 1; k < n; k++){
        //             if(A[i] + A[j] + A[k] == X){
        //                 return 1;
        //             }
        //         }
        //     }
        // }
        // return 0;
        
        
        sort(A, A+n);
        for(int i = 0; i < n-2; i++){
            int low = i+1;
            int high = n-1;
            
            while(low < high){
                int sum = A[i] + A[low] + A[high];
                if(sum == X) return true;
                
                else if(sum < X) low++;
                else high--;
            }
        }
        return false;
    }

};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
