//USing SORT O(NlogN)

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
	    int A[2*n+2];
	    
	    for(int i=0; i<2*n+2; i++)
	    cin>>A[i];
	    
	    sort(A, A+2*n+2);
	    int i=0, count=0;
	    while(i<2*n+2-1)
	    {
	        if(A[i]==A[i+1])
	        i+=2;
	        else
	        {
	            cout<<A[i]<<" ";
	            i++;
	            count++;
	            if(count==2)
	            break;
	        }
	        if(i==2*n+2-1)
	        cout<<A[i];
	    }
	    
	    cout<<endl;
	    
	    t--;
	}
	return 0;
}


// USing MAP in O(N) time


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    int A[2*n+2];
	    
	    for(int i=0; i<2*n+2; i++)
	    cin>>A[i];
	    
	    map<int , int> pair;
	    
	    for(int i=0; i<2*n+2; i++)
	     pair[A[i]]=0; 
	    
	    for(int i=0; i<2*n+2; i++)
	    pair[A[i]]+= 1;
	    
	    vector<int > out(2,0);
	    
	    int count= 0;
	    
	    for(int i=0; i<2*n+2; i++)
	    {
	        if(pair[A[i]]%2!=0 && A[i]!= out[0])
	        {
	            out[count]= A[i];
	            count++;
	            if(count==2)
	            break;
	        }
	    }
	    if(out[0]>out[1])
	    cout<<out[1]<<" "<<out[0];
	    
	    else
	    cout<<out[0]<<" "<<out[1];
	    
	    cout<<endl;
	    
	    t--;
	}
	return 0;
}
