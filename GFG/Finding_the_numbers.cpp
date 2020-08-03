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
