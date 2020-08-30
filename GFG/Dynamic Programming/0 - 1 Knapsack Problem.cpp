#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int dp[1000][1001];
	    
	    for(int i=0; i<1000; i++)
	    {
	        for(int j=0; j<=1000; j++)
	        dp[i][j]= 0;
	    }
	    int n, w;
	    cin>>n>>w;
	    
	    int weight[n];
	    int val[n];
	    
	    for(int i=0; i<n; i++)
	    cin>>val[i];
	    
	    for(int i=0; i<n; i++)
	    cin>>weight[i];
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<=w; j++)
	        {
	            if(i==0)
	            {
	                if(weight[i]<=j)
	                dp[i][j]= val[i];
	            }
	            else if(j<weight[i])
	            dp[i][j]= dp[i-1][j];
	            else if(j>=weight[i])
	            dp[i][j]= max(dp[i-1][j], dp[i-1][j-weight[i]]+ val[i]);
	        }
	    }
	    cout<<dp[n-1][w]<<endl;
	}
	return 0;
}
