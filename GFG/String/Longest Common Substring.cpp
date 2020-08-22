#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    int  max_count=0;
	    int dp[n][m];
	    memset(dp,0, sizeof(dp));
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        { 
	            if(i==0 || j==0)
	            {
	                if(s1[i]==s2[j])
	                dp[i][j]=1;
	                else
	                dp[i][j]=0;
	            }
	            else if(s1[i]==s2[j])
	            dp[i][j]= dp[i-1][j-1]+1;
	            else
	            dp[i][j]=0;
	            
	            if(dp[i][j]>=max_count)
	            max_count= dp[i][j];
	        }
	    }
	    cout<<max_count<<endl;
	}
	return 0;
}
