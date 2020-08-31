#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    queue<vector<int>> q;
	    vector<vector<int>> V(n);
	    vector<int> v1(n);
	    vector<int> v2(n);

	    for(int i=0; i<n; i++)
	    cin>>v1[i];
	    
	    for(int i=0; i<n; i++)
	    cin>>v2[i];
	    
        for(int i=0; i<n; i++)
        V[i]= {v1[i], v2[i]};
        
	    sort(V.begin(), V.end());
        v1.clear();
        v2.clear();
        
	    int count=1, maxx=1, pindex=0;
	    bool flag= true;
	    
	    bool  current[n];
	    for(int i=0; i<n; i++)
	    current[i]= false;
	    
	    current[0]= true;
	    for(int i=1; i<n; i++)
	    {
	        count++;
	        current[i]= true;
	        for(int j= i-1; j>=0; j--)
	        {
	            if(V[i][0]>V[j][1] && current[j])
	            {
	                count--;
	                current[j]= false;
	            }
	        }

	        if(count>maxx)
	        maxx= count;
	    }
	    cout<<maxx<<endl;
	}
	return 0;
}
