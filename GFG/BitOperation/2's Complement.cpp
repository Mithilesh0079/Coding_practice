#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t>0)
	{
	     string s;
	     cin>>s;
	     
	     for(int i=0; i<s.size(); i++)
	     {
	         if(s[i]=='0')
	         s[i]='1';
	         
	         else
	         s[i]='0';
	     }
	     int carry=1;
	     for(int i=s.size()-1; i>=0; i--)
	     {
	         if(s[i]=='1' && carry==1)
             {
               s[i]='0';
	           carry=1;
             }
             else if(s[i]=='0' && carry==1)
             {
                 s[i]='1';
                 carry=0;
             }
	     }
	     
	     for(int i=0; i<s.size(); i++)
	     {
	         /*if(carry==1)
	         {
	             cout<<1;
	             carry=0;
	         }*/
	         
	         cout<<s[i];
	     }
	     
	     cout<<endl;
	     
	     t--;
	}
	
	return 0;
}
