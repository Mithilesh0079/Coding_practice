#include<iostream>
using namespace std;
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
	    int count=1;
	    int p_index=0;
	    for(int i=1; i<n; i++)
	    {
	        if(arr[p_index]==arr[i])
	        count++;
	        else
	        count--;
            if(count==0)
	        {
	            p_index= i;
	            count=1;
	        }
	    }
	    if(count<=0)
	    cout<<-1<<endl;
	    else
	    {
	        count=0;
	        for(int i=0; i<n; i++)
	        {
	            if(arr[i]==arr[p_index])
	            count++;
	        }
	        if(count>n/2)
	        cout<<arr[p_index]<<endl;
	        else
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
