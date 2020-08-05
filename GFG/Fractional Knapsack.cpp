#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sortcol(vector<float> &v1, vector<float> &v2)
{
    return (v1[0])/(v1[1])>=(v2[0])/(v2[1]);
}
int main()
 {
     int t;
     cin>>t;
     while(t>0)
     {
         int n, w;
         cin>>n>>w;
         
         vector<float> arr(2,0);
         vector<vector<float>> A;
         float val, wet;
         for(int i=0; i<n; i++)
         {
             cin>>val;
             cin>>wet;
             arr[0]= val;
             arr[1]= wet;
            A.push_back(arr);
         }
         
        sort(A.begin(), A.end(), sortcol);
        
        double value= 0; 
        for(int i=0; i<n; i++)
        {
            
          if(w>=A[i][1])
            {
                w= w- A[i][1];
                value+= A[i][0];
            }
          else
            {
                value+= (w/A[i][1])* A[i][0];
                break;
            }
        }
        
       cout << fixed << setprecision(2)<<value<<endl;
         
         t--;
     }
	//code
	return 0;
}
