vector<int> duplicates(int a[], int n) {
    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        a[a[i]%n]+= n;
    }
    
    for(int i=0;i<n; i++)
    {
        if(a[i]>=2*n)
        ans.push_back(i);
    }
    if(ans.size()==0)
    
    ans.push_back(-1);
    return ans;
}
