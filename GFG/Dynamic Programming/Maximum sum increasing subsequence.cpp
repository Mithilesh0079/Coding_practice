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
	    for(int i=0; i<n; i++){
	        dp[i]= arr[i];
	    }
	    int i=1;
	    int j=0;
	    while(i<n)
	    {
	        for(int j=0; j<i; j++)
	        {
	            if(arr[j]<arr[i])
	            dp[i]= max(dp[i], dp[j]+arr[i]);
	        }
	        i++;
	    }
	    cout<<*max_element(dp, dp+n)<<endl;
	}
	return 0;
}
