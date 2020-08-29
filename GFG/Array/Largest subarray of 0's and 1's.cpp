int maxLen(int arr[], int N)
{
    unordered_map<int, int> m;
    int sum=0, res=0;
    for(int i=0; i<N; i++)
    {
        if(arr[i]==0)
        sum--;
        else
        sum++;
        
        if(sum==0)
        res= max(res, i+1);

        if(m[sum]!=0)
        {
            res= max(res, i+1-m[sum]);
        }
        else
        m[sum]=i+1;
    }
    return res;
}
