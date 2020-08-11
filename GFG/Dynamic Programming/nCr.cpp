#include<iostream>

using namespace std;
int memo[1001][801];
int nCr(int n, int r)
  {
        int result;
        
        if(n<=0 || n<r)
        return 0;
        
        else if(r==0)
        return 1;
        
        if( r==1)
        return n;
        
        if(memo[n][r]!=-1)
        {
            return memo[n][r];
        }
        else
        
        result=(nCr(n-1, r-1)%1000000007+ nCr(n-1, r)%1000000007)%1000000007; 
         
        memo[n][r]= result;
         
        return result;
        
}
int main()
 {
     int t;
     cin>>t;
     while(t>0)
     {
         int n, r;
         cin>>n>>r;
         for(int n=0; n<=1000; n++)
         {
             for(int r=0; r<=800; r++)
             memo[n][r]= -1;
         }
         
         cout<<nCr(n, r)<<endl;
         t--;
     }
	//code
	return 0;
}
