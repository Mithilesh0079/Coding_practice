#include<iostream>
using namespace std;

int Bleft(int arr[], int l, int r, int m)
{
    bool flag= false;
    
    while(l<=r)
    {
        int mid= l+(r-l)/2;
        if(m<arr[mid])
        r= mid-1;
        
        else if(m>arr[mid])
        l= mid+1;
        
        else if(m==arr[mid])
        {
           flag= true;
           r= mid-1;
        }
    }
    if(flag)
    return r+1;
    
    return -1;
}
int Bright(int arr[], int l, int r, int m)
{
    while(l<=r)
    {
        int mid= l+(r-l)/2;
        if(m<arr[mid])
        r= mid-1;
        else if(m>arr[mid])
        l= mid+1;
        else if(m==arr[mid])
        {
           l= mid+1;
        }
    }
    return l-1;
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
	    
	    int m;
	    cin>>m;
	    
	    int left= Bleft(arr, 0, n-1, m);
	    int right= Bright(arr, 0, n-1, m);
        
        if(left!=-1)
	    cout<<left<<" "<<right<<endl;
	    
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
