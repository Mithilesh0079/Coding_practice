#include<iostream>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    
	    int mat[m][n];
	    
	    for(int i=0; i<m; i++)
	    {
	        for(int j=0; j<n; j++)
	        cin>>mat[i][j];
	    }
	    int left=0, up=0, right=n-1, down= m-1;
	    int dir=0;
	    while(left<=right && up<=down)
	    {
	        dir= dir%4;
	        if(dir==0)
	        {
	            for(int i=left; i<=right; i++)
	            cout<<mat[up][i]<<" ";
	            
	            dir++;
	            up++;
	        }
	        else if(dir==1)
	        {
	            for(int i=up; i<= down; i++)
	            cout<<mat[i][right]<<" ";
	            
	            right--;
	            
	            dir++;
	        }
	        else if(dir==2)
	        {
	            for(int i= right; i>=left; i--)
	            cout<<mat[down][i]<<" ";
	            
	            down--;
	            dir++;
	        }
	        else
	        {
	            for(int i=down; i>=up; i--)
	            cout<<mat[i][left]<<" ";
	            
	            left++;
	            dir++;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
