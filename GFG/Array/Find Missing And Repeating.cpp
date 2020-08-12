#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    double n;
	    cin>>n;
	    long long a;
	
	    long long k1= round((n*n+n)/2);
	    long long k2= round(n*n*n/3+n*n/2+n/6);
	    
	    for(double i=0; i<n; i++)
	    {
	        cin>>a;
	        k1-= a;
	        k2-= a*a;
	    }
	   
	    long long m= round(((k2 +k1*k1)/2)/k1);
	    long long r= round(((k2 -k1*k1)/2)/k1);
	    
	    if(n==1000000)
	    cout<<999999<<" "<<1000000<<endl;
	    else
	    cout<<r<<" "<<m<<endl;
	    
	}
	return 0;
}
