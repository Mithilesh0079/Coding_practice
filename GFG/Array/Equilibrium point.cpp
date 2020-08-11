#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    int t_sum=0;
	    for(int i=0; i<n; i++)
	    t_sum= t_sum+ arr[i];
	    
	    int b_sum= 0, a_sum= t_sum, flag=0;
	    int i=0;
	    for(i= 0; i<n; i++)
	    {
	        if(b_sum== a_sum)
	        {
	            cout<<i;
	            flag=1;
	            break;
	        }
	        
	        a_sum= t_sum- b_sum;
	        b_sum= b_sum+ arr[i];
	    }
	    if(!flag)
	    {
	     if(a_sum==b_sum)
	     cout<<i;
	     else
	     cout<<-1;
	    }
	   
	    cout<<endl;
	    t--;
	}
	return 0;
}
