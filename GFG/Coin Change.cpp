#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int num_ways(int arr[], int n, int sum)
{
    if(sum==0)
    return 1;
    if(sum>0 && n>=1)
    {
    if(n==1 && arr[n-1]>sum)
    return 0;
    
    else if(n==1 && sum%arr[n-1]==0)
    return 1;
    
    else if(n==1)
    return 0;
    
    int x= num_ways(arr, n, sum-arr[n-1]);
    int y= num_ways(arr, n-1, sum);
    return x+y;
    }
    
   else    
    return 0;
}*/

int main()
 {
     
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	     
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    int sum;
	    cin>>sum;
	    
	    int dp[sum+1]={0};
	    dp[0]=1;
	   
	        for(int i= 0; i<n; i++)
	        {
	            for(int j= arr[i]; j<= sum; j++)
	            dp[j]+= dp[j- arr[i]];
	            
	         }
	    
	    cout<<dp[sum]<<endl;
	    
	    t--;
	}
	return 0;
}
