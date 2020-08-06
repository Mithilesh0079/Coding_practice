#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t>0)
	{
	    int n1, n2;
	    cin>>n1>>n2;
	    string s1, s2;
	    
	    cin>>s1;
	    cin>>s2;
	    
	    int dp[n1+1][n2+1]={0};
	    

	    for(int i=0; i<=n1; i++)
	    {
	        for(int j= 0; j<= n2; j++)
	        {
	            if(i==0)
	            {
	                //cout<<j<<" ";
	                dp[i][j]= j;
	            }
	            else if(j==0)
	            {
	                //cout<<i<<" ";
	                dp[i][j]=i;
	            }
	            
	            else if(s1[i-1]==s2[j-1])
	            {
	                
	                dp[i][j]= min(dp[i-1][j]+1, min(dp[i-1][j-1], dp[i][j-1]+1));
	               // cout<<dp[i][j]<<" ";
	            }
	            else
	            {
	                dp[i][j]= min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]))+1;
	               // cout<<dp[i][j]<<" ";
	            }
	        }
	        //cout<<endl;
	    }
	    
	    cout<<dp[n1][n2]<<endl;
	    
	    t--;
	}
	return 0;
}
