#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         
         int arr[n];
         for(int i=0; i<n; i++)
         cin>>arr[i];
         
         int max_t=0;
         
         deque<int> Q;
        
         for(int i=0;i<k; i++)
         {
             while(!Q.empty()&&arr[i]>=arr[Q.back()])
             Q.pop_back();
             
             Q.push_back(i);
         }
         
         cout<<arr[Q.front()]<<" ";
         for(int i=k; i<n; i++)
         {
             
             while(!Q.empty() && i-Q.front()>=k)
             Q.pop_front();
             
             while(!Q.empty() && arr[i]>= arr[Q.back()])
             Q.pop_back();
             
             Q.push_back(i);
             
             cout<<arr[Q.front()]<<" ";
         }
             
         cout<<endl;
     }
	//code
	return 0;
}
