#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    cin>>m;
	    
	    int sum=0;
	    for(int i=0; i<n; i++)
	    sum+= arr[i];
	   
	    bool dp[n][1001];
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<=1000; j++)
	        dp[i][j]=false;
	    }
	    
	    bool flag= true;
	    for(int i=0; i<n; i++)
	    {
	        if(!flag)
	        break;
	        
	        for(int j=0; j<=1000; j++)
	        {
	            if(i==0 && arr[i]==j)
	                dp[i][j]= true;
	            else if(i==0)
	            continue;
	            else if(j+arr[i]<=1000)
	            dp[i][j]= (dp[i-1][abs(j-arr[i])] || dp[i-1][j+arr[i]]);
	            else 
	            dp[i][j]= dp[i-1][j-arr[i]];
	            
	            if(i==n-1 && j%m==0 && dp[i][j])
	            {
	                flag= false;
	                cout<<1;
	                break;
	            }
	        }
	    }
	    if(flag)
	    cout<<0;
	    
	    cout<<endl;
	}
	return 0;
}
