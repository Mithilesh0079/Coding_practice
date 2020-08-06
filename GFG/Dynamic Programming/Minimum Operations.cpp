#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t>0)
     {
         t--;
         int n;
         cin>>n;
         int dp[n+1];
         dp[0]=0;
         for(int i=1;i<=n; i++)
         {
             if(i%2==0)
             dp[i]= min(dp[i-1], dp[i/2]) +1;
             else
             dp[i]= dp[i-1]+1;
         }
         
         cout<<dp[n]<<endl;
     }
	//code
	return 0;
}
