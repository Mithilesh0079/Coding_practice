#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    getline(cin, s);
	    if(s.length()==0)
	    getline(cin, s);
	    
	    int n= s.length();
	    
	    stack<int> st;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='(')
	        st.push(i);
	        
	        else if(s[i]==')')
	        {
	            if(st.empty())
	            continue;
	            else if(s[st.top()]=='(')
	            {
	                s[i]= '1';
	                s[st.top()]= '1';
	                st.pop();
	            }
	            else
	            continue;
	        }
	    }
	    int count=1, maxx=0;
	    for(int i=0; i<n-1; i++)
	    {
	        if(s[i]=='1' && s[i+1]=='1')
	        count++;
	        else
	        count=1;
	        
	        if(count>maxx)
	        maxx= count;
	    }
	    cout<<maxx<<endl;
	}
	return 0;
}
