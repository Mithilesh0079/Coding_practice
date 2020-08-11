#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unordered_map<char, int> m1;
unordered_map<char, int> m2;


bool isanagram(string s1, string s2, int n1, int n2)
{
    if(n1!=n2)
    return false;
    string low="abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<26; i++)
    {
        m1[low[i]]=0;
        m2[low[i]]=0;
    }
    for(int i=0; i<n1; i++)
    m1[s1[i]]+=1;
    
    for(int j=0; j<n2; j++)
    m2[s2[j]]+=1;
    
    for(int i=0; i<26; i++)
    {
        if(m1[low[i]]!= m2[low[i]])
        return false;
    }
    
    return true;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    string s1, s2;
	    cin>>s1;
	    cin>>s2;
	    
	    int n1= s1.size();
	    int n2= s2.size();
	    
	    if(isanagram(s1, s2, n1, n2))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    t--;
	}
	return 0;
}
