#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int start[n];
        int end[n];
        
        for(int i=0; i<n; i++){
            cin>>start[i]>>end[i];
        }
        
        sort(start, start+n);
        sort(end, end+n);
        
        cout<<start[0]<<" ";
        
        int current=1, prev=0;
        while(current<n)
        {
            if(start[current]>end[prev])
            {
                cout<<end[prev]<<" ";
                cout<<start[current]<<" ";
            }
            prev++;
            current++;
        }
        cout<<end[n-1]<<" ";
        
        cout<<endl;
    }
	return 0;
}
