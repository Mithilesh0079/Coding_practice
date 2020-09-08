void dodfs(vector<int> *A[], int N, int M, int i, int j)
{
    (*A)[i][j]=2;
    int I[]= {-1,-1,0,1,1,1,0,-1};
    int J[]= {0,1,1,1,0,-1,-1,-1};
    for(int x=0; x<8; x++)
    {
        if(i+I[x]>=0 && i+I[x]<N && j+J[x]>=0&& j+J[x]<M)
        {
            if((*A)[i+I[x]][j+J[x]]==1)
                dodfs(A, N, M, i+I[x], j+J[x]);
        }
    }
}
int findIslands(vector<int> A[], int N, int M) {
     
     int count=0;
     for(int i=0; i<N; i++)
     {
         for(int j=0; j<M; j++)
         {
             if(A[i][j]==1)
             {
                 dodfs(&A, N, M, i, j);
                 count++;
             }
         }
     }
     return count;
}
