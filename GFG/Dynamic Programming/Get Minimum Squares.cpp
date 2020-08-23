#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int minsquare(int n)
{
    int x= sqrt(n);
    if(x*x==n)
    return 1;
    
    int dp[n+1];
    memset(dp, 10000, sizeof(dp));
    
    dp[0]=0;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=min(i,x); j++)
        {
            if(i>=j*j)
            dp[i]= min(dp[i], dp[i-j*j]+1);
        }
    }
    
    return dp[n];
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<minsquare(n)<<endl;
	}
	return 0;
}
