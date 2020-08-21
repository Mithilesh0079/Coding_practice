#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, w;
	    cin>>n>>w;
	    int val[n];
	    int weight[n];
	    
	    for(int i=0; i<n; i++)
	    cin>>val[i];
	    
	    for(int i=0; i<n; i++)
	    cin>>weight[i];
	    
	    int dp[n][w+1];
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<=w; j++)
	        dp[i][j]=0;
	    }
	    //dp[0]=0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=w; j++)
            { 
                if(j>=weight[i])
                {
                   dp[i][j]= max(dp[max(0,i-1)][j], dp[i][j-weight[i]]+ val[i]);
                }
                else
                dp[i][j]= dp[max(0, i-1)][j];
            }
        }
	    
	    cout<<dp[n-1][w]<<endl;
	}
	return 0;
}
