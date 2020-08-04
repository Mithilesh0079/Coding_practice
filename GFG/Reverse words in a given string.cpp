#include<iostream>
#include <string> 
#include<vector>
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
	    
	    string tstr;
	    tstr.clear();
	    int n= str.size();
	    
	    vector<string> v;
	    int v_size=0;
	    for(int i=0; i<n; i++)
	    {   
	        if(str[i]!= '.')
	        tstr.push_back(str[i]);
	        
	        else
	        {
	            v.push_back(tstr);
	            tstr.clear();
	        }
	    }
	    v.push_back(tstr);

	    int i=0;
	    for(i= v.size()-1; i>0; i--)
	    {
	        cout<<v[i]<<'.';
	    }
	    cout<<v[i];
	    
	   cout<<endl;
	    t--;
	}
	
	return 0;
}
