#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_length(string str, int n)
 {
    if(n==1)
    return 1;
    
    int start=0;
    int end= 1;
    int count=1;
    int maxt=0;
    
    while(end<n && start<=end)
    {
        for(int i = end-1; i>=start; i--)
        {
            if(str[i]==str[end])
            start= i+1;
            count=end- start;
        }
        count++;
        end++;
        
        if(count>maxt)
        maxt= count;
    }
    
    return maxt;
}

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
	    cout<<max_length(str, n)<<endl;
	    t--;
	}
	return 0;
}
