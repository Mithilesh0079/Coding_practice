#include<iostream>
using namespace std;
bool board[10][10];

bool isSafe(int i, int j, int n)
{
    for(int row=0; row<i; row++)
    {
        if(board[row][j])
        return false;
    }
    int col= j;
    int row= i;
    
    while(row>=0 && col>=0)
    {
        if(board[row][col])
        return false;
        
        col--;
        row--;
    }
    row= i;
    col= j;
    
    while(row>=0 && col<n)
    {
        if(board[row][col])
        return false;
        
        row--;
        col++;
    }
    
    return true;
    
}
bool SolveNqueen(int i, int n , bool* istrue)
{
    if(i==n)
    {
        *istrue= false;
        cout<<'[';
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(board[i][j])
                {
                     cout<<j+1<<" ";
                      
                }
              
            }
        }
        cout<<']'<<" ";
        return false;
    }
    
    for(int j=0; j<n; j++)
    {
        if(isSafe(i, j, n))
        {
             board[i][j]=true;
             
             bool isok = SolveNqueen(i+1,n, istrue);
             
             if(isok)
             return true;
             
             board[i][j]= false;
        }
        
    }
    return false;
}

int main()
 {
     int t;
     cin>>t;
     
     while(t>0)
     {
         int n;
         cin>>n;
         
         for(int i=0; i<10; i++)
         {
             for(int j=0; j<10; j++)
             board[i][j]= false;
         }
         
         bool istrue= true;
         
         SolveNqueen(0,n, &istrue);
         
         if(istrue)
         cout<<-1;
         
         cout<<endl;
         t--;
     }
	//code
	return 0;
}
