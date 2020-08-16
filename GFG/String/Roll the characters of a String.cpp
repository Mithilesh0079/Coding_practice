#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    getline(cin, str);
	    if(str.length()==0)
	    getline(cin, str);
	    
	    int roll[n];
	    for(int i=0; i<n; i++)
	    cin>>roll[i];
	    
	    for(int i=0; i<n; i++)
	    {
	        int rol= roll[i];
	        for(int j=0; j<rol && j<str.size(); j++)
	        {
	            str[j]= 'a'+ char((int(str[j]-'a')+1)%26);
	        }
	    }
	    
	    for(int i=0; i<str.size(); i++)
	    cout<<str[i];
	    cout<<endl;
	}
	return 0;
}
