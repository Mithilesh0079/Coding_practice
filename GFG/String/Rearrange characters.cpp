#include<iostream>
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
       
       int count=1;
       int p_index=0;
       for(int i=1; i<s.length(); i++)
       {
           //cout<<count;
           if(s[i]==s[p_index])
           count++;
           else
           count--;
           
           if(count==0)
           {
               count=1;
               p_index= i;
           }
       }
      // cout<<p_index<<endl;
       int freq=0;
       for(int i=0; i<s.length(); i++)
       {
           if(s[i]==s[p_index])
           freq++;
       }
       
     //  cout<<freq<<endl;
       if(s.length()- freq>=freq-1)
       cout<<1<<endl;
       else
       cout<<0<<endl;
       
     }
	return 0;
}
