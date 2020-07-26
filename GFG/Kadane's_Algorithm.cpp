#include<iostream>
#include <climits>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t>0)
     {
         int n;
         cin>>n;
         int arr[n];
         for(int i=0; i<n; i++)
         cin>>arr[i];
         
         int s= 0;
         int max_sum=INT_MIN;
         
         for (int i=0; i<n; i++)
         {
             s= s + arr[i];
             max_sum= max(s, max_sum);
             
             if(s<0)
             s=0;
    
         }
         cout<<max_sum;
         cout<<endl;
         t--;
     }
	return 0;
}
