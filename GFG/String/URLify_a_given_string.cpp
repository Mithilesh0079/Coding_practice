#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     cin.ignore();
     
     while(t>0)
     {
         int k;
         string s;
         
         getline(cin, s);
         
         if(s.length()==0)
         getline(cin,s);
         
         cin>>k;
         k= s.length();
      
         for(int i=0; i<k; i++)
         {
        
             if(s[i]==' ')
             {
                cout<<"%20";
             }
             
             else
             cout<<s[i];
         }
        
        if(t>1)
        cout<<"\n";
         
          t--;
     }
	
	return 0;
}
