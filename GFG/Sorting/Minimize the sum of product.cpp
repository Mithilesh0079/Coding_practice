#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
     
     int t;
     cin>>t;
     while(t>0)
     {
         int n;
         cin>>n;
         
         long A[n];
         long B[n];
         
         for(int i=0; i<n; i++)
         cin>>A[i];
         
         for(int j=0; j<n; j++)
         cin>>B[j];
         
         sort(A, A+n);
         sort(B, B+n);
         long long product= 0;
         for(int i=0; i<n; i++)
         {
             int j= n-i-1;
             product= product +  A[i]* B[j];
         }
         cout<<product<<endl;
         
         t--;
     }
	//code
	return 0;
 }
