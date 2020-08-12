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
	    int matrix[n][n];
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0;j<n; j++)
	        cin>>matrix[i][j];
	    }
	    
	    for(int row=1; row<n; row++)
	    {
	        for(int col=0; col<n; col++)
	        { 
	            if(col>=1 && col<n-1)
	            matrix[row][col]= max(matrix[row-1][col], max(matrix[row-1][col+1], matrix[row-1][col-1]))+ matrix[row][col];
	            else if(col==0)
	            matrix[row][col]= max(matrix[row-1][col], matrix[row-1][col+1])+ matrix[row][col];
	            else if(col==n-1)
	            matrix[row][col]= max(matrix[row-1][col],  matrix[row-1][col-1])+ matrix[row][col];
	        }
	    }
	    
	    int maxt=0;
	    for(int col=0; col<n; col++)
	    maxt= max(maxt, matrix[n-1][col]);
	    
	    cout<<maxt<<endl;
	}
	return 0;
}
