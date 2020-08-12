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
	    
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int moves[]={x,y,z};
	    
	    int dp[n+1];
	    
	     for(int i=0; i<=n; i++)
	     dp[i]=-1;
	     
	     dp[0]=1;
	     
	    for(int i=1; i<=n; i++)
	    {
	        int max_val= 0;
	        for(int j=0; j<3; j++)
	           { 
	           
	              if(i>=moves[j])
	              {
	                if(i%moves[j]==0 || dp[i-moves[j]]!=0)
                    {	
                      int val= dp[i-moves[j]]+1;
	                  if(val>max_val)
	                  max_val= val;
                      }
                    
	               }
	        }
	        dp[i]= max_val;
	    }
	    
	    cout<<dp[n]-1<<endl;
	}
	return 0;
}
