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
	    
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    int count[3];
	    for(int i=0; i<3; i++)
	    count[i]=0;
	    
	    for(int i=0; i<n; i++)
	    count[arr[i]]+= 1;
	    
	    int i=0;
	    while(i<3)
	    {
	        if(count[i]>0)
	        {
	            cout<<i<<" ";
	            count[i]--;
	        }
	        else
	        i++;
	        
	        
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
