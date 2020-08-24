#include<iostream>
using namespace std;

bool isheap(int arr[],int n, int i)
{
    if(i>n/2)
    return true;
    int l= 2*i+1;
    int r= 2*i+2;
    if(l<n && r<n)
    return arr[i]>=arr[l] && arr[i]>= arr[r] && isheap(arr, n, l) && isheap(arr, n, r);
    
    if(l<n)
    return arr[i]>=arr[l];
 
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
	    
	    if(isheap(arr,n, 0))
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
