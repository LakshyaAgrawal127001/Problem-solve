#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
 int mn = INT_MAX, mx = INT_MIN;
    for (int i=0; i<n; i++) {
        mn = min(mn, mat[i][0]);
        mx = max(mx, mat[i][n - 1]);
    }
    int desired = k;
    while (mn < mx) {
        int mid = mn + (mx - mn) / 2;
        int place = 0;
        for (int i = 0; i < n; ++i)
            place += upper_bound(mat[i], mat[i]+n, mid) - mat[i];
        if (place < desired)
            mn = mid + 1;
        else mx = mid;
    }
    return mn;
}
