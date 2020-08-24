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
	    
	    int i=0, j= n-1;
	    
	    int start=0, end= n-1;
	    int val=0;
	    
	    while(i<j && i<n && j>=0)
	    {
	        if(arr[i]<arr[j])
	        {
	            if(arr[start]>=arr[i])
	            {
    	            val+= arr[start]- arr[i];
    	            i++;
	            }
	            else
	            start= i;
	        }
	        else
	        {
	            if(arr[end]>=arr[j])
	            {
	              val+= arr[end]- arr[j];
	              j--;
	            }
	            else
	            end= j;
	        }
	    }
	    cout<<val<<endl;
	}
	return 0;
}
