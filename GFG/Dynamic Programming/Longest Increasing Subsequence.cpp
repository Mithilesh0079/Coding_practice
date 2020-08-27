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
	    if(n==0)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    int dp[n];
	    for(int i=0; i<n; i++)
	    dp[i]= 1;
	    
	    int i=1;
	    
	    while(i<n)
	    {
	        for(int j=0; j<i; j++)
	        {
	            if(arr[i]>arr[j])
	            dp[i]= max(dp[i], dp[j]+1);
	        }
	        i++;
	    }
	    cout<<*max_element(dp, dp+n)<<endl;
	}
	return 0;
}
