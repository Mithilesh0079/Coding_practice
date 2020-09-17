#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int r, c;
	    cin>>r>>c;
	    bool row[r];
	    bool col[c];
	    
	    memset(row, false, sizeof(row));
	    memset(col, false, sizeof(col));
	    bool mat[r][c];
	    
	    for(int i=0;i<r; i++)
	    {
	        for(int j=0; j<c; j++)
	        {
	            cin>>mat[i][j];
	            
	            if(mat[i][j])
	            {
	                row[i]=true;
	                col[j]= true;
	            }
	        }
	    }
	    
	    for(int i=0; i<r; i++)
	    {
	        for(int j=0; j<c; j++)
	        {
	            if(row[i]||col[j])
	            mat[i][j]=true;
	            
	            cout<<mat[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
