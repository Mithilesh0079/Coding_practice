#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> M;

bool sortcomp(int &v1, int &v2)
{
    if(M[v1] <=1000000 || M[v2] <=1000000)
    return M[v1]<M[v2];
    
    return v1<v2;
}

int main()
 {
	int t;
	cin>>t;
	
	while(t>0)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    int A[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>A[i];
	        M[A[i]]= 10000000; //>10^6
	    }
	    
	    int a;
	    
	    for(int i=0; i<m; i++)
	    {
	        cin>>a;
	        M[a]= i;
	    }
	    
	    sort(A, A+n, sortcomp);
	    
	    for(int i=0; i<n; i++)
	    cout<<A[i]<<" ";
	    
	    cout<<endl;
	    
	    t--;
	}
	return 0;
}
