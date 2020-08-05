#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t>0)
	{
	    string str;
	    getline(cin, str);
	    if(str.length()==0)
	    getline(cin, str);
	    
	    int n= str.size();
	    
	    stack<char> st;
	    
	    int flag= 0;
	    
	    for(int i= 0; i<n; i++)
	    {
	        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
	        st.push(str[i]);
	        
	        else if(!st.empty())
	        {
	           char top= st.top();
	           
    	       if(str[i]==')' && top!= '(' || str[i]=='}' && top!= '{' || str[i]==']' && top!= '[')
    	        {
    	            cout<<"not balanced";
    	            flag=1;
    	            break;
    	        }
    	        else if(str[i]==')' && top== '(' || str[i]=='}' && top== '{' || str[i]==']' && top== '[')
    	        st.pop();
	        }
	        
	        else
	        {
	            cout<<"not balanced";
	            flag=1;
	            break;
	        }
	       
	    }
	    
	    if(!flag)
	    {
	        if(st.empty())
	        cout<<"balanced";
	        
	        else
	        cout<<"not balanced";
	    }
	   // cout<<n;
	    cout<<endl;
	    
	    t--;
	}
	return 0;
}
