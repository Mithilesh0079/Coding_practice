#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t>0)
	{
	    string a;
	    string b;
	    cin>>a;
	    cin>>b;
	    int n= a.size();
	    bool flag= true;
	    bool flag1= true;
	    for(int i=2; i<n; i++)
	    {
	        if(a[i]!= b[i-2])
	        flag= false;
	    }
	    for(int i=0; i<2; i++)
	    {
	        if(a[i]!= b[n+i-2])
	        flag= false;
	    }
	    if(!flag)
	    {
	        for(int i=2; i<n; i++)
	        {
	        if(a[i-2]!= b[i])
	        flag1= false;
	        }
	       for(int i=0; i<2; i++)
	        {
	        if(b[i]!= a[n+i-2])
	        flag1= false;
	        }
	    }
	    if(flag || flag1)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	    
	    t--;
	}
	return 0;
}
