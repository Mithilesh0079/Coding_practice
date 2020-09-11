#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int  arr[3]= {0};
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            arr[a]+=1;
            
        }
        int i=0;
        
        while(i<3)
        {
            if(arr[i]>0)
            {
                cout<<i<<" ";
                arr[i]--;
            }
            else
            i++;
        }
        cout<<endl;
    }
	return 0;
}
