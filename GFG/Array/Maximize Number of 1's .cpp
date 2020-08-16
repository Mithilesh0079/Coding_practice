#include<iostream>
#include<queue>
using namespace std;
int max_size(int arr[], int m, int n){
    
        queue<int> Q;
	    int prev_0=0, i=0, size=0, flag=0, zcount=0;
	    
	    if(m==n)
	    return m;
	    else if(m==0)
	    {
	        int max_size=0;
	        for(int i=0; i<n; i++)
	        {
	            if(arr[i]==1)
	            size++;
	            else
	            size=0;
	            
	            if(size>max_size)
	            max_size=size;
	        }
	        return max_size;
	    }
	    
        while(i<n && zcount<=m)
        {
            if(flag==0 && arr[i]==0)
            {
                flag=1;
                prev_0= i;
                Q.push(i);
                zcount++;
            }
            else if(arr[i]==0 && zcount<m)
            {
                zcount++;
                Q.push(i);
            }
            
            else if(arr[i]==0)
                break;
                
            i++;
            size++;
        }
        
        int max_s=size;

        for(int j=i; j<n; j++)
        {
           
            if(arr[j]==0 )
            {
                prev_0= Q.front();
                Q.pop();
                Q.push(j);

                size= j-prev_0;
            }
         
            else if(arr[j]==1)
            size++;
            
            if(size>max_s)
            max_s= size;
            //cout<<prev_0<<endl;
        }
     return max_s;
        
	}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0; i<n ;i++)
	    cin>>arr[i];
	    
	    int m;
	    cin>>m;
	    cout<<max_size(arr, m,n)<<endl;
	}
	    
	return 0;
}
