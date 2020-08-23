#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
    {
        int v, n;
        cin>>v>>n;
        
        int arr[n];
        for(int i=0; i<n;i++)
        cin>>arr[i];
        int dp[v+1];
        memset(dp, INT_MAX, sizeof(dp));
        dp[0]=0;
        for(int i=1; i<=v;i++)
        {  
            int mi=INT_MAX;
            for(int j=0; j<n; j++)
            {
                if(arr[j]<=i)
                mi= min(mi, dp[i-arr[j]]);
            }
            if(mi==INT_MAX)
            dp[i]= mi;
            else
            dp[i]= mi+1;
        }
        if(dp[v]==INT_MAX)
        cout<<-1<<endl;
        else
        cout<<dp[v]<<endl;
    }
	return 0;
}
