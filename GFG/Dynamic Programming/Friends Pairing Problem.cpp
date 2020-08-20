#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    long dp[n+1]={0};
	    dp[1]=1;
	    dp[0]=1;
	    for(int i=2; i<=n; i++)
	    {
	        dp[i]= ((dp[i-1])%1000000007+ ((i-1)*dp[i-2])%1000000007)%1000000007;
	    }
	    cout<<dp[n]<<endl;
	  
	}
	return 0;
}
