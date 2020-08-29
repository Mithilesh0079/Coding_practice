#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	   int n, k;
	   cin>>n>>k;
	   
	   int arr[n];
	   for(int i=0; i<n; i++)
	   cin>>arr[i];
	   unordered_map<int, int >m;
	   int maxx=0, current=0;
	   for(int i=0; i<n ; i++)
	   {
	       current= current+arr[i];
	       if(current==k)
	       maxx= max(maxx, i+1);
	       
	        if(m[current]==0)
	        m[current]= i+1;
	        
	       if(m[current-k]!=0)
	       {
	           maxx= max(maxx, i+1-m[current-k]);
	       }
	   }
	   cout<<maxx<<endl;
	}
	return 0;
}
