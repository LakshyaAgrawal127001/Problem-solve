#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    int PalinArray(int a[], int n)
    {
     for(int i=0;i<n;i++){
     
       int reverseNumber=0;
     
       int number=a[i];
        
        while(number){
            int remainder =number%10;
            reverseNumber=reverseNumber*10+ remainder;
            number=number/10;
        }
        if(reverseNumber != a[i]) return 0; 
        
    }
    return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
