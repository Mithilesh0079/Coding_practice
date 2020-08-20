#include<bits/stdc++.h>
using namespace std;

bool isdivisible(int arr[], int n, int sum)
{
    bool dp[n][sum+1] = {false};
    
    for(int i=0; i<n; i++)
    {
        for(int j= 0; j<=sum; j++)
        {
            if(j==0)
            dp[i][j]= true;
            
            else if(i==0 && j==arr[i])
            dp[i][j]= true;
            else if(i==0)
            dp[i][j]= false;
            
            else if(j>=arr[i])
            dp[i][j]= (dp[i-1][j] || dp[i-1][j- arr[i]]);
            else
            dp[i][j]= dp[i-1][j];
            
        }
    }
    
    return dp[n-1][sum];
}

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
         
         int sum=0;
         for(int i=0; i<n; i++)
         sum+= arr[i];
         
         if(sum%2!=0)
         {
             cout<<"NO"<<endl;
             continue;
         }
         sum= sum/2;
         if(isdivisible(arr, n, sum))
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
     }
     return 0;
}
