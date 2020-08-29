int maxLen(int A[], int n)
{
    if(n==0)
    return 0;
    int maxx=0;
    int sum= 0;
    unordered_map<int, int> m;
    
    for(int i=0; i<n; i++)
    {
        sum= sum+A[i];
        if(sum==0)
        maxx= max(maxx, i+1);
        
        if(m[sum]!=0)
        {
            maxx= max(maxx, i+1- m[sum]);
        }
        else
        m[sum]= i+1;
    }
    return maxx;
}
