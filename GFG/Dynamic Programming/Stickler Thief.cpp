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
         
         int arr[n];
         for(int i=0; i<n; i++)
         cin>>arr[i];
         
         if(n==1)
         {
             cout<<arr[0]<<endl;
             continue;
         }
         arr[1]= max(arr[0], arr[1]);
         for(int i=2; i<n; i++)
         {
             arr[i]= max(arr[i-1], arr[i-2]+ arr[i]);
         }
         cout<<arr[n-1]<<endl;
     }
	return 0;
}
