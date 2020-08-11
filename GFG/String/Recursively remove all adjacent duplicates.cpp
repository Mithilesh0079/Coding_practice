#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string is_duplicates(string s)
   {
      int n= s.size();
	    int start=0;
	    int end= 1;
	    int count=1;
	    bool flag= false;
	    
	    while(end<n && start<=end)
	    {
	        if(s[end]!= s[end-1] && count>1)
	        {
	            count=1;
	            for(int i= start; i<end; i++)
	            {
	                s[i]='0';
	                flag= true;
	                //cout<<" pass";
	            }
	           
	        }
	        if(end<n-1 && s[end-1]!=s[end] && s[end]==s[end+1])
	        start=end;
	        if(s[end-1]==s[end])
	        count++;
	        
	        end++;
	    }
	 
	    if(start<n-1 && s[start]== s[n-1] && count>1)
	    {
	        for(int i=start; i<n; i++)
	        {
	            s[i]='0';
	            flag= true;
	            //cout<<" pass";
	        }
	    }
	   string s1;
	   for(int i=0; i<n; i++)
	   {
	       if(s[i]!='0')
	       s1.push_back(s[i]);
	   }
	   
	   if(flag==true)
	   return s1;
	   
	   else
	   return s;
	  
   }

  string removeduplicates(string s)
  {
    string s1= is_duplicates(s);
    
    if(s1.length()==s.length())
    return s;
    
    return removeduplicates(s1);

}
int main()
 {
	int t;
	cin>>t;
	while(t>0)
	{
	    string s;
	    getline(cin, s);
	    if(s.length()==0)
	    getline(cin,s);
	    //int n= s.size();
	   
	    string out= removeduplicates(s);
	    
	    int n= out.size();
	    
	    for(int i=0; i<n; i++)
	    {
	       cout<<out[i];
	    }
	    
	    cout<<endl;
	    t--;
	}
	return 0;
}
