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
	    char str[n];
	    for(int i=0; i<n; i++)
	    cin>>str[i];
	    unordered_map<char, int> hash;
	    queue<char> q;
	    for(char c='a'; c<='z'; c++)
	    hash[c]=0;
	    for(int i=0; i<n; i++)
	    {
	        hash[str[i]]+=1;
	        
	        if(hash[str[i]]==1)
	        {
	            if(q.empty())
	            cout<<str[i]<<" ";
	            else
	            cout<<q.front()<<" ";
	            
	            q.push(str[i]);
	        }
            while(!q.empty() && hash[q.front()]>1)
            q.pop();
            
            if(hash[str[i]]>1)
	        {
	            if(q.empty())
	            cout<<-1<<" ";
	            else 
	            cout<<q.front()<<" ";
	        }
	       
	    }
	    cout<<endl;
	}
	return 0;
}
