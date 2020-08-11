#include<iostream>
#include<vector>
using namespace std;


int main()
 {
     int t;
     cin>>t;
     while(t>0)
     {
         static string alpha= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
         int n;
         cin>>n;
         
         vector<int> out;
         while(n>0)
         {
             out.push_back((n-1)%26);
             n= (n-1)/26;
         }
         for(int i=out.size()-1; i>=0; i--)
         cout<<alpha[out[i]];
         
         cout<<endl;
         
         t--;
     }
	//code
	return 0;
}
