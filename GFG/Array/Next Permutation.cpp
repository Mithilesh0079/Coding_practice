#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)
{
    int* p= a;
    *a= *b;
    *b= *p;
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
	    
	    bool flag= true;
	    int i=n-1;
	    while(i>0)
	    {
	        int p_index=n-1;
	        if(arr[i]>arr[i-1])
	        {
	            for(int j= n-1; j>0; j--)
	            {
	                if(arr[j]>arr[i-1])
	                {
	                    p_index=j;
	                    break;
	                }
	            }
	            
	            swap(arr[i-1], arr[p_index]);
	            sort(arr+i, arr+n);
	            flag= false;
	            break;
	        }
	        i--;
	    }
	    if(flag)
	    {
	        for(int i=n-1; i>=0; i--)
	        cout<<arr[i]<<" ";
	    }
	    else
	    {
    	    for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
