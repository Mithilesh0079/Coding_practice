#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    int dp[n+1]= {};
	    dp[0]=1;
	    
	    for(int i=3; i<=n; i++)
	    dp[i]+=dp[i-3];
	    
	    for(int i=5; i<=n; i++)
	    dp[i]+= dp[i-5];
	    
	    for (int i=10; i<=n; i++)
	    dp[i]+= dp[i-10];
	    
	    cout<<dp[n]<<endl;
	    
	    t--;
	}
	return 0;
}
