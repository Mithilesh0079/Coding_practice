#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    int dp[n];
	    for(int i=0; i<n; i++)
	    dp[i]= 10000000;
	    
	    dp[0]= 0;
	    
	    bool lflag= true;
	    for(int i=0; i<n-1; i++)
	    {
	        if(!lflag)
	        break;
	        for(int j= i+1; j<=i+arr[i]&&j<n; j++)
	        {
	            dp[j]= min(dp[j], dp[i]+1);
	            if(j==n-1)
	            {
	                lflag= false;
	                break;
	            }
	        }
	    }
	  if(dp[n-1]==10000000)
	  cout<<-1<<endl;
	  else
	    cout<<dp[n-1]<<endl;
	}
	return 0;
}
