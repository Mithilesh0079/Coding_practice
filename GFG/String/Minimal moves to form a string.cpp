#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        getline(cin, str);
        if(str.length()==0)
        getline(cin, str);
        
        int n= str.size();
        
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        bool flag= true;
        for(int i=2; i<=n; i++)
        {
            flag= true;
            if(i%2==0)
            {
               for(int j=0; j<i/2; j++)
                {
                    if(str[i/2+j]!=str[j])
                    {
                        dp[i]= dp[i-1]+1;
                        //cout<<str[i-j-1]<<" "<<str[j]<<endl;
                        flag= false;
                        break;
                    }
                }
                if(flag)
                dp[i]= min(dp[i-1], dp[i/2])+1;
            }
            else
            dp[i]= dp[i-1]+1;
        }
        
        cout<<dp[n]<<endl;
    }
	return 0;
}
