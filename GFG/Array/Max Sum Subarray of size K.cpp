#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    int arr[n];
	    for(int i=0;i<n; i++)
	    cin>>arr[i];
	    
	    int current=0,maxx=0;
	    for(int i=0; i<k; i++){
	        current= max(current+arr[i], arr[i]);
	        maxx= max(maxx, current);
	    }
	    for(int i=k; i<n; i++){
	        current= max(current+ arr[i]-arr[i-k], arr[i]);
	        maxx= max(maxx, current);
	    }
	    cout<<maxx<<endl;
	}
	return 0;
}
