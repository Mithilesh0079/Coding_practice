#include<iostream>
#include<vector>
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
        vector<int> v(3,0);
        vector<vector<int>> SF(n,v);
        
        for(int i=0; i<n; i++)
        cin>>SF[i][1];
        
        for(int i=0; i<n; i++)
        {
            cin>>SF[i][0];
            SF[i][2]=i;
        }
        
        sort(SF.begin(), SF.end());
    
        cout<<SF[0][2]+1<<" ";
        for(int i=1; i<n; i++)
        {
            if(SF[i][1]>=SF[i-1][0])
            cout<<SF[i][2]+1<<" ";
            else
            {
                SF[i][0]=SF[i-1][0];
            }
            
        }
        
       cout<<endl;
	}
	return 0;
}
