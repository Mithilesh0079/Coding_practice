#include<iostream> 
#include<vector>
using namespace std;

void shiftdown(vector<int> &arr, int i, int n)
{
    if(i<n)
    {
        int l= 2*i+1;
        int max_index=i;
        if(l<n && arr[l]<=arr[max_index])
        max_index= l;
        int r= 2*i+2;
        if(r<n && arr[r]<=arr[max_index])
        max_index=r;
        
        if(max_index!=i)
        {
            swap(arr[i], arr[max_index]);
            shiftdown(arr, max_index, n);
        }
    }

}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int k, n;
        cin>>k>>n;
        
        vector<int>v;
        v.clear();
        int a;
        for(int i=0; i<k-1; i++)
        {
            cin>>a;
            v.push_back(a);
            cout<<-1<<" ";
        }
        cin>>a;
        v.push_back(a);
        for(int i= v.size()/2; i>=0; i--)
        {
            shiftdown(v, i, v.size());
        }
        cout<<v.front()<<" ";
        for(int i= k; i<n; i++)
        {
            cin>>a;
            if(a>v.front())
            {
                v.push_back(a);
                swap(v[0], v[v.size()-1]);
                v.pop_back();
                shiftdown(v, 0, v.size());
            }
            cout<<v.front()<<" ";
        }
        cout<<endl;
    }
	return 0;
}
