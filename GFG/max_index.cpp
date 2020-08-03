#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t>0)
    {
    int n;
    cin>>n;
    int A[n];
    
    for(int i=0; i<n; i++)
    cin>>A[i];
    
    int max_index=0;
    
    int t1[n], t2[n];
    
    int sb= A[0], la=0; //sb- smallest_before, la- largest_after
    
    for(int i=0; i<n; i++)
    {
        int j= n-i-1;
        sb= min(A[i], sb);
        la= max(A[j], la);
        t1[i]= sb;
        t2[j]= la;
    }
    
    int i=0, j=0;
    
    while(i<n && j<n)
    {
        if(t2[j]>=t1[i])
        {
            max_index= max(max_index, j-i);
            j++;
        }
        else
        i++;
    }
    cout<<max_index<<endl;
        t--;
    }
    	return 0;
}
