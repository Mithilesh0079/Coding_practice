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
	    
	   int val[n+1];
	   for(int i=1; i<=n; i++)
	   cin>>val[i];
	   val[0]=0;
	   
	   int dp[n+1][n+1];
	   
	   for(int i=0; i<=n; i++)
	   {
	       for(int j=0; j<=n; j++)
	       dp[i][j]=0;
	   }
	   
	   for(int i=1; i<=n; i++)
	   {
	       for(int j=1; j<=n; j++)
	       {
	           if(j>=i)
	           {
	               dp[i][j]= max(dp[max(0, i-1)][j], dp[i][j-i]+ val[i]);
	           }
	           else 
	           dp[i][j]= dp[max(0, i-1)][j];
	       }
	   }
	   
	   cout<<dp[n][n]<<endl;
	}
	return 0;
}#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	    
	   int val[n+1];
	   for(int i=1; i<=n; i++)
	   cin>>val[i];
	   val[0]=0;
	   
	   int dp[n+1][n+1];
	   
	   for(int i=0; i<=n; i++)
	   {
	       for(int j=0; j<=n; j++)
	       dp[i][j]=0;
	   }
	   
	   for(int i=1; i<=n; i++)
	   {
	       for(int j=1; j<=n; j++)
	       {
	           if(j>=i)
	           {
	               dp[i][j]= max(dp[max(0, i-1)][j], dp[i][j-i]+ val[i]);
	           }
	           else 
	           dp[i][j]= dp[max(0, i-1)][j];
	       }
	   }
	   
	   cout<<dp[n][n]<<endl;
	}
	return 0;
}
