#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int m, n, k;
	    cin>>m>>n>>k;
	    
	    int A[m];
	    int B[n];
	    
	    for(int i=0; i<m; i++)
	    cin>>A[i];
	    for(int i=0; i<n; i++)
	    cin>>B[i];
	    
	    int i=0, j=0;
	    int temp, count=0;
	    bool flag= true;
	    
	    while(i<m && j<n)
	    {
	        if(A[i]<B[j])
	        {
	            temp= A[i];
	            count++;
	            i++;
	        }
	        else
	        {
	            temp= B[j];
	            count++;
	            j++;
	        }
	        
	        if(count==k)
	        {
	            flag= false;
	            cout<<temp<<endl;
	            break;
	        }
	    }
	    
	    if(flag)
	    {
	        if(i<m)
	        {
	            cout<<A[i+k-count-1]<<endl;
	            continue;
	        }
	        if(j<n)
	        {
	            cout<<B[j+k-count-1]<<endl;
	        }
	    }
	}
	return 0;
}
