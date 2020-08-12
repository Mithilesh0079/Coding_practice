#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    bool isprime[n+1]= {true};
	    
	    for(int i=0;i<=n; i++)
	    isprime[i]= true;
	    
	    isprime[0]=false;
	    isprime[1]= false;
	    
	    for(int i=2; i<=sqrt(n); i++)
	    {
	        for(int j= i*i; j<=n; j+=i)
	        {
	            isprime[j]= false;
	        }
	    }
	    
	    vector<int> primes;
	    
	    for(int i=2; i<=n; i++)
        {
            if(isprime[i])
            primes.push_back(i);
        }
        
        int start=0, end=primes.size()-1;
        
        bool flag= true;
        while(start<=end)
        {
            if(primes[start]+ primes[end]==n)
            {
                flag= false;
                cout<<primes[start]<<" "<<primes[end]<<endl;
                break;
            }
            else if(primes[start]+ primes[end]>n)
            end--;
            else
            start++;
        }
        
        if(flag)
        cout<<-1<<endl;
        
	    t--;
	}
	return 0;
}
